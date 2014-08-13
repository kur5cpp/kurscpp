#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

//class vector
//{};


int main()
{
    int halo=123;


    ofstream p;
    p.open("p.txt");
    if(p.is_open()){
        cout<<"plik otwarto"<<endl;
        p<<" Halo Halo Test";
        p<<halo;
        p.close();
    }
    cout << "Hello world!" << endl;
    return 0;
}
