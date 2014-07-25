#include <iostream>
#include "jeden.h"
//przyklad 3_38

using namespace std;


int main()
{
    int n, k;
    telement *wstosu;
    wstosu=NULL;
    cout<<"";
    cout<<"";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cout<<"podaj liczbe calkowita:";
        cin>>k;
        wstosu=dodaj(k, wstosu);
        wypisz(wstosu);
    }
    cout<<""<<endl;
    while(wstosu!=NULL)
    {
        wstosu=usun(&k, wstosu);
        cout<<"zdejmowany element to: "<<k<<endl;
        wypisz(wstosu);
    };
}

