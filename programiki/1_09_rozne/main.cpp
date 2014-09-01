#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <ctime>

using namespace std;


int main()
{
        srand(time(NULL));
        int x;
       // cout<<<<endl;
        for(;;){
                x=rand();
                cout<<hex<<&x<<"\t"<<dec<<x<<endl;
                sleep(1);
        }
        cout << "Hello world!" << endl;
        return 0;
}
