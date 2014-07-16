#include <iostream>
#include <stdio.h>

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

int ciag_a(int n)
{
    if (n==1) return 2;
    else return 3*ciag_a(n-1)+0.5;
}
int ciag_b(int n)
{
    if (n==1) return 0.5;
    if (n==2) return 1;
    else return 3*ciag_b(n-2)+ciag_b(n-1);
}
int main()
{
    for(int i=1; i<=10; i++)
    {
        cout.precision(2);
        cout<<(float)ciag_b(i)<<"\n";
    }
    return 0;
}
