//#include <iostream>
//
//using namespace std;
//
//void pusta(int a)
//{
//    for(int i=0; i<a; i++)
//        cout<<"Ja!";
//        a++;
//        cout<<a;
//}
//
//int main()
//{
//    int n;
//    cin>>n>>a>>g;
//    pusta(n);
//    cout<<n;
//    return 0;
//}

//podfunkcja zwraca sume 3 arg
#include <iostream>

using namespace std;

int suma(int x, int y, int z)
{
    return x+y+z;
}

float srednia(int x, int y, int z)
{
    return suma(x,y,z)/3.0;
}

int main()
{
    int n, a, g;
    cin>>n>>a>>g;
    cout<<suma(n, a, g)<<endl;
    cout<<srednia(n, a, g)<<endl;
    return 0;
}
