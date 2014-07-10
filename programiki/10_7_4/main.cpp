//program do upraszczania ulamka
//zmienne int, licznik, mianownik
//funkcja przyjmujaca te zmienne jako arg..
#include <iostream>

using namespace std;

void uprosc (int &a, int &b)
{
    int maxwspolny=0, mniejsza;
    if (a<b)
        mniejsza=a;
    else mniejsza=b;
    for(int i=2; i<mniejsza; i++)
        if ((a%i==0)&&(b%i==0))
            maxwspolny=i;
    a/=maxwspolny;
    b/=maxwspolny;
}

int main()
{
    int x= 9, y=12;
    uprosc(x, y);
    cout <<x<<"\n"<<y<< endl;
    return 0;
}
