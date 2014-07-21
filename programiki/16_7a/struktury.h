#ifndef STRUKTURY_H_INCLUDED
#define STRUKTURY_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;
//
//struct t_pracownicy
//{
//    string imie;
//    string nazwisko;
//    int rok_ur;
//};

struct t_calendar_date
{
    int day, month, year;
};

struct t_allowance
{
    double kwota;
    char opis[50];
    t_calendar_date payed_date, returned_date;
};


//CONSTANT ETC
const int N=3;
t_allowance allowed_list[N];


//ostream& operator<< (ostream& F, t_pracownicy const& pracownik)
//{
//    F<<pracownik.imie<<" "<<pracownik.nazwisko<<"\t/"<<pracownik.rok_ur<<"/";
//    return F;
//}

//void struc_1()
//{
//    t_pracownicy prac;
//    prac.imie = "Marcin";
//    prac.nazwisko = "Marcinowski";
//    prac.rok_ur = 1993;
//    cout<<prac<<"\n";
//}
//
//void struc_2_pointers()
//{
//    t_pracownicy* pprac = new t_pracownicy;
//    pprac->imie = "MarcinPointer";
//    pprac->nazwisko = "Pointerowski";
//    pprac->rok_ur = 1993;
//    cout<<*pprac<<"\n";
//    delete pprac;
//}
void cal_date_out(int n)
{
    cout<<"\nData pozyczki:"<<allowed_list[n].payed_date.day<<"/";
    cout<<allowed_list[n].payed_date.month<<"/"<<allowed_list[n].payed_date.year;
    cout<<"\n\n";
}

void allowance_list_in()
{
    cout<<"podaj dane do spisu pozyczek:";
    for(int i=0; i<N; i++)
    {
        cout<<"\n\nPoz nr."<<i<<endl;
        cout<<"kwota:"; cin>>allowed_list[i].kwota;
        cout<<"opis:"; cin>>allowed_list[i].opis;
        cout<<"Data pozyczki:";
        cout<<"dzien:"; cin>>allowed_list[i].payed_date.day;
        cout<<"miesiac:"; cin>>allowed_list[i].payed_date.month;
        cout<<"rok:"; cin>>allowed_list[i].payed_date.year;
    }
}

void allowance_list_out()
{
    cout<<"\n\nWyswietlanie listy wszystkich pozyczek:";
    for(int i=0; i<N; i++)
    {
        cout<<"\n\nPozWy:"<<i<<endl;
        cout<<"\nKwota:"<<allowed_list[i].kwota<<endl;
        cout<<"\nopis:"<<allowed_list[i].opis;
        cal_date_out(i);
    }
}

void allowance_list_out_big()
{
    cout<<"\n\nWyswietlanie listy duzych pozyczek:";
    for(int i=0; i<N; i++)
    {
        if(allowed_list[i].kwota>100)
        {
            cout<<"\n\nPozWy:"<<i<<endl;
            cout<<"\nKwota:"<<allowed_list[i].kwota<<endl;
            cout<<"\nopis:"<<allowed_list[i].opis;
            cal_date_out(i);
        }
    }
}

void allowance_list()
{
    allowance_list_in();
    allowance_list_out();
    allowance_list_out_big();
}

#endif // STRUKTURY_H_INCLUDED
