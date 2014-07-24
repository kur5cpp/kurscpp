#include <iostream>
#include <stdio.h>
#include <string>
#include "inout.h"

using namespace std;

struct T_student

{
    string nazwisko;
    string imie;
    int wiek;
};



int main(void)
{
    T_student ala;
    ala.nazwisko = "alicjowska";
    ala.imie = "ala";
    ala.wiek = 22;
    FILE *plik;
    T_student baza_danych[10];
    baza_danych[0]=ala;
    int ilosc;
    if((plik = fopen("test.bin", "rb"))!=NULL)
    {
        ilosc = 0;
        while(fread(&baza_danych[ilosc], sizeof(T_student), 1, plik)==1)
            ilosc++;
        fclose(plik);
    }
    if((plik = fopen("test.txt", "wt"))!=NULL)
    {
    for(int i=0; (!feof(plik))&&(i<10); i++)
        fprintf(plik, "%s %s %d", baza_danych[i].nazwisko.c_str(), baza_danych[i].imie.c_str(),
                (baza_danych[i].wiek));
        fclose(plik);
    }
    return 0
//    cout<<ala.imie<<ala.nazwisko<<ala.wiek;
}

