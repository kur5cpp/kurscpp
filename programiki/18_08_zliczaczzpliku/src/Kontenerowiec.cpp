#include "Kontenerowiec.h"

Kontenerowiec::Kontenerowiec()
{
        //ctor
}

Kontenerowiec::~Kontenerowiec()
{
        //dtor
}

void Kontenerowiec::do_it()
{
        kont_wczytaj_plik();
        kont_wyswietl();
        cout<<"jestem tu";
}

void Kontenerowiec::kont_wczytaj_plik()
{
        string linia;
        ifstream in ("test.txt");
        if (in.is_open()){
                while(getline(in, linia)){
                kont_policz(linia);
                }
        cout<<"otwarto plik";
        in.close();
        }
}

void Kontenerowiec::kont_policz(string linia)
{
        int dlugosc=linia.length();
        for (int i=0; i>dlugosc; i++)
              //  if(isdigit(linia[i]))
                        kont_mrowka(linia[i]);
        cout<<"policzone!";
}

void Kontenerowiec::kont_mrowka(char cyferka)
{
//        if (zbiornik.size()!=0){
//                for (int i=0; i<zbiornik.size(); i++)
//                        if (cyferka==zbiornik[i].indeks_wartosc){
//                                zbiornik[i].ilosc_wystapien++;
//                                cout<<"\ndodalem nowy el kontenera\n";
//                        }
//        }
//        else {
                Kontener dupa(cyferka, 1);
                zbiornik.push_back(dupa);
                cout<<"\nstworzylem nowy element kontenera";
//                zbiornik[0].indeks_wartosc=cyferka;
//                zbiornik[0].ilosc_wystapien=1;
//        }
}

void Kontenerowiec::kont_wyswietl()
{
        for (int i=0; i<zbiornik.size(); i++){
                cout<<zbiornik[i].indeks_wartosc<<"\t";
                cout<<zbiornik[i].ilosc_wystapien<<endl;
        }
        cout<<"\nbylem i chcialem cos wyswietlic\n";
}
