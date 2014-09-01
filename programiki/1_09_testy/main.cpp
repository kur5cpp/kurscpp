#include <iostream>

using namespace std;

bool f(int d, int m, int y)
{
        if(y>0 && 0<m<13 ((y%4 == 0 && y%100 !=0) || y%400==0)){
                if(m==2 && 0<d<29) return true;
                if(m!=2 && m%2==0 && 0<d<31) return true;
                if(m!=2 && m%2!=0 && 0<d<32) return true;
        }
        if(y>0 && 0<m<13 ())

        else return false;
}

#define TEST(result, d, m, y, nr) if(result != f(d, m, y)) cout<<"problem"<<nr<<endl;

int main()
{
    TEST(true, 31, 2, 1900, 1);
    cout << "Hello world!" << endl;
    return 0;
}
