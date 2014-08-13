#include "Stos.h"

Stos::Stos()
{
        dlugosc=0;
        //ctor
}

Stos::~Stos()
{
        //dtor
}

int Stos::stos_push(int x)
{
        dlugosc++;
        if(dlugosc>100){
                cout<<"na stosie wincyj sie nie zmiesci";
                return 1;
        }
        kontener[dlugosc]=x;
        return 0;
}

int Stos::stos_pop()
{
        if(dlugosc<1){
                cout<<"stos jest pusty..";
                return 0;
        }
        int temp;
        temp=kontener[dlugosc];
        dlugosc--;
        return temp;
}

int Stos::stos_ile()
{
        return dlugosc;
}

void Stos::stos_wyswietl()
{
        for(int i=1; i<=dlugosc; i++){
                cout<<kontener[i]<<endl;
        }
        cout<<"wyswietlono"<<endl;
}
