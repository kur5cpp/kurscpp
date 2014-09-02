#include <iostream>
#include <cstring>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <unistd.h>


using namespace std;

int net_socket;
sockaddr_in remote;

int net_init(string ipaddr, unsigned short port)
{
    if(-1 == (net_socket = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP)))
        return -1;
    int b = 1;
    if (0 > setsockopt(net_socket, SOL_SOCKET, SO_BROADCAST, (void *) &b, sizeof(b)))
        return -1;
    memset((char*)&remote, 0, sizeof(remote));
    remote.sin_addr.s_addr = inet_addr(ipaddr.c_str());
    remote.sin_port = htons(port); //LittleEndian --> BigEndian


    sockaddr_in local;
    memset((char*)&local, 0, sizeof(local));
    local.sin_addr.s_addr = htonl(INADDR_ANY);
    local.sin_port = htons(1234);
    if( -1 == bind(net_socket, (sockaddr*)&local, sizeof(local))) {
        cerr << "problem: bind" << endl;
        return -1;
    }

    return 0;
}

int net_send(string s)
{
    if (-1 == sendto(net_socket, s.c_str(), s.size(), 0, (sockaddr*)&remote, sizeof(remote)))
        return -1;
    return 0;
}

void net_done()
{
    shutdown(net_socket, SHUT_RDWR);
}

void (*net_listener)(string sender, string message);

void* net_receiver(void*)
{
#define BUFLEN (1536+1)
    static char buf[BUFLEN];
    while(1)
    {
        int rxdatalen;
        sockaddr_in remote;
        socklen_t sockaddrlen = sizeof(remote);
        if( -1 == (rxdatalen = recvfrom(net_socket, buf, BUFLEN, 0, (sockaddr*)&remote, &sockaddrlen)))
        {
            cerr << "problem: recvfrom" << endl;
            return NULL;
        }
        buf[rxdatalen] = '\0';
        string sender = inet_ntoa(remote.sin_addr);
        sender += ":";
        sender += to_string(ntohs(remote.sin_port));
        string message = buf;
        net_listener(sender, message);

    }
}
void net_start_receiver( void (*net_listener)(string sender, string message) )
{
    ::net_listener = net_listener;
    pthread_t thread_id;
    pthread_create(&thread_id, NULL, net_receiver, NULL);
}





void my_listener(string s, string m)
{
        if(s!="192.168.202.137:1234")//moje ip
                cout << "\"" << s << "\t" << m << "\"" << endl;
}

int main()
{
    net_init("192.168.207.255", 1234);
    net_start_receiver(my_listener);
    string whoami = "Marcin";
    string body = "Halo halo";


    for(;;)
    {
        net_send("rgb 50 0 0");
        sleep(5);
        net_send("rgb 0 50 50");
        sleep(5);
        net_send("rgb 0 50 0");
        sleep(5);
    }
    net_done();
    return 0;
}
