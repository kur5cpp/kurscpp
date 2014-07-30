#include <iostream>
#include <string>
#include "Ulamek2.h"
#include <stdlib.h>

using namespace std;


//class Zwierze
//{
//    public:
//    int rok_ur;
//    string kolor;
//    string imie;
//
//    void daj_glos()
//    {
//        cout<<"hau hau";
//    }
//
//    void podaj_wiek()
//    {
//        cout<<rok_ur;
//    }
//};

//class Ulamek
//{
//    public:
//    int licznik, mianownik, temp;
//
//    void ustaw_wartosci(int x, int y)
//    {
//        licznik=x;
//        mianownik=y;
//    }
//    void wyswietl_ulamek(int licznik, int mianownik)
//    {
//        cout<<licznik<<"\n_\n"<<mianownik<<endl;
//    }
//    void wyswietl_odwr(int licznik, int mianownik)
//    {
//        cout<<"Odwrotnosc\n";
//        cout<<mianownik<<"\n_\n"<<licznik<<endl;
//    }
//    void dodaj_ulamek(int li, int mi)
//    {
//        temp=(licznik*mi)+(li*mianownik);
//        licznik=temp;
//        mianownik*=mi;
//        cout<<"wynik dodawania:\n";
//        wyswietl_ulamek(licznik, mianownik);
//    }
//};

int main()
{
    srand(time(NULL));

    Ulamek2 tablica_ulamkow[10];
//    Ulamek2 *tablica_ulamkow=ptablica_ulamkow;
    for(int i=0; i<10; i++)
    {
        tablica_ulamkow[i].licznik=rand()%21-10;
        zerocheck:
        tablica_ulamkow[i].mianownik=rand()%21-10;
        if(!tablica_ulamkow[i].mianownik) goto zerocheck;
    }
    for(int i=0; i<10; i++)
        tablica_ulamkow[i].wyswietl_ulamek();
//    Zwierze piesio;
//    piesio.imie="Reksio";
//    piesio.kolor='Szarobury';
//    piesio.rok_ur=2000;
//    piesio.daj_glos();
//    cout<<"\n";
//    piesio.podaj_wiek();
//    cout << "\nHello world!" << endl;
//    Zwierze piesio1;
//    piesio1.imie="Lassie";
//    cout<<piesio1.imie<<endl<<piesio.imie;
    return 0;
}
