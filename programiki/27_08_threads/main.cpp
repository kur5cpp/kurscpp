#include <iostream>
#include <thread>
#include <time.h>
#include <unistd.h>
#include <mutex>
#include <fstream>

using namespace std;

mutex muteksik;


void f(int x){
//	muteksik.lock();
//	ofstream plik;
//	plik.open("test.txt", ios::app);
	volatile int y=0;
        for(int i=0; i<5; i++){
//                plik<<i<<"\t"<<x;
//                plik<<endl;
                y++;
                cout<<i<<"\t"<<x<<"\t"<<y<<endl;
		sleep(1);
        }
//	plik.close();
//	muteksik.unlock();
}


int main()
{
        thread watek_1(f, 1);
	thread watek_2(f, 2);
	watek_1.join();
	watek_2.join();
//	watek_1.detach();
//	f(3);
        cout << "Hello world!" << endl;
        return 0;
}
