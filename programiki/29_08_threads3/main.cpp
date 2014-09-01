#include <iostream>
#include <thread>
#include <unistd.h>


using namespace std;

void f1(volatile int* wsk)
{
        *wsk=0;
        cout<<*wsk;
}

void f2(volatile int* wsk)
{
        while(*wsk) cout<<"a"<<"\t"<<*wsk<<endl;
}
int main()
{
        volatile int x=1;
       // int* wsk=&x;
        thread pierwszy(f2, &x);
        sleep(1);
        thread drugi(f1, &x);
        pierwszy.join();
        drugi.join();
    cout << "Hello world!" << endl;
    return 0;
}
