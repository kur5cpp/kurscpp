#include <iostream>
#include <iomanip>

using namespace std;


//float silnia2(int n)
//{
//    if(n==1) return 1;
//    else return n*silnia2(n-1);
//}

int fibo(int n)
{
    if (n==1) return 1;
    if (n==2) return 2;
    else return fibo(n-1)+fibo(n-2);
}

float ciag_a(int n)
{
    if (n==1) return 2;
    else return 3*ciag_a(n-1)+0.5;
}

float ciag_b(int n)
{
    if (n==1) return 0.5;
    if (n==2) return 1;
    else return 3*ciag_b(n-2)+ciag_b(n-1);
}

float ciag_c(int n)
{
    if (n==1) return 2;
    if (n==2) return 4;
    else return ciag_c(n-2)+2*ciag_c(n-1)+0.5;
}

float ciag_d(int n)
{
    if (n==1) return -1.5;
    if (n==2) return 0;
    if (n==3) return 1.5;
    else return 2*ciag_d(n-3)+ciag_d(n-2)-ciag_d(n-1);
}

float ciag_dit(int n)
{
    float a1=-1.5, a2= 0, a3=1.5, a4, wynik=0;
    if (n==1) return -1.5;
    if (n==2) return 0;
    if (n==3) return 1.5;
    for (int i=1; i<n; i++)
    {
        wynik=2*a1+a2-a3;
        cout<<wynik<<endl;
        a1=a2; a2=a3; a3=wynik;
    }
    return wynik;
}


int main()
{
    for(int i=1; i<=10; i++)
    {
        cout.precision(2);
        cout<<ciag_a(i)<<"\t"<<ciag_b(i)<<"\t"<<ciag_c(i)<<"\t"<<ciag_d(i)<<"\n";
    }
    int i=10;
    cout.precision(2);
    cout<<ciag_dit(i)<<"\n";
    return 0;
}

