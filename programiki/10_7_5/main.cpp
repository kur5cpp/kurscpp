//zabawa z tablicami

#include <iostream>
#include <stdlib.h>

using namespace std;

void wyswietl(int tab[], int rozm);
void dekr(int tab[], int rozm);
bool symetria(int tab[], int rozm);
void wypelnijlosowo(int tab[], int rozm);
void przesunplus(int tab[], int rozm);

int main()
{
    srand(time(NULL));
    int rozm1=10, rozm2=50, rozm3=100;
    int tab1[]={0,1,2,3,4,4,3,2,1,0};
    int tab2[rozm2];
    int tab3[rozm3];
//    int oile=1;
//glowne wyrazenia
    wypelnijlosowo(tab2, rozm2);
    wyswietl(tab2, rozm2);
    wypelnijlosowo(tab3, rozm3);
    wyswietl(tab3, rozm3);
    dekr(tab2, rozm2);
    wyswietl(tab2,rozm2);
    symetria(tab1, rozm1);
    wyswietl(tab1, rozm1);
    przesunplus(tab2,rozm2);
    wyswietl(tab2, rozm2);
    return 0;
}

void wyswietl(int tab[], int rozm)
{
    cout<<"wyswietlam\n";
    for(int i=0; i<rozm; i++)
        cout<<tab[i]<<" ";
    cout<<"\n";
}

void dekr(int tab[], int rozm)
{
    for(int i=0; i<rozm; i++)
        tab[i]--;
}

bool symetria(int tab[], int rozm)
{
    for(int i=0; i<rozm/2; i++)
    {
        if (tab[i]!=tab[rozm-i])
        {
            cout<<"\n\n"<<"zero\n";
            return 0;
        }
    }
    cout<<"\n\n"<<"jeden\n";
    return 1;
}

void wypelnijlosowo(int tab[], int rozm)
{
    for(int i=0; i<rozm; i++)
        tab[i]=rand()%101;
}
//przesuniecie o jeden lub dwa w prawo
void przesunplus(int tab[], int rozm)
{
    int buf;
    buf=tab[rozm-1];
    for(int i=rozm-2; i>=0; i--)
        tab[i+1]=tab[i];
    tab[0]=buf;
}
