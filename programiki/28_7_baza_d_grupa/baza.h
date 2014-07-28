#ifndef BAZA_H_INCLUDED
#define BAZA_H_INCLUDED
#include <string>
#include <iostream>

using namespace std;


struct t_osoba
{
    string imie;
    int wiek;
};

int N=2;

t_osoba * db_init(t_osoba *baza)
{
    int N=0;
    cout<<"Choose number of db entries"; cin>>N;
    t_osoba *ourdb;
    ourdb = new t_osoba;
    for(int i=0; i<N; i++)
    {
        cin>>ourdb[i].imie;
        cin>>ourdb[i].wiek;
    }
    return ourdb;
}

void db_remove(int dbindex, t_osoba *ourdb)
{
    t_osoba *ourdb1;
    ourdb1 = new t_osoba[N-1];
    for(int i=0; i<N; i++)
        {
            if(i!=dbindex) ourdb1[i]=ourdb[i];
        }
    ourdb = ourdb1;
    N--;
}

void db_add(t_osoba os_add, t_osoba *ourdb)
{
    t_osoba *ourdb1;
    ourdb1 = new t_osoba[N+1];
    for(int i=0; i<N; i++)
        ourdb1[i]=ourdb[i];
    ourdb1[N+1]=os_add;
    ourdb = ourdb1;
    N++;
}

void db_print(t_osoba *ourdb)
{
    for(int i=0; i<N; i++)
    {
        cout<<(*(ourdb+i))->imie<<"\t"<<(*(ourdb+i))->wiek;
    }
}


#endif // BAZA_H_INCLUDED
