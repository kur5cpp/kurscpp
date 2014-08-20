#include <iostream>
#include <vector>
#include <string>
#include <algorithm>


using namespace std;

void wyswietl_zaw_wekt(vector<string> wejscie)
{
        for(int i=0; i<wejscie.size(); i++){
                cout<<wejscie[i];
                cout<<endl;
        }
        cout<<"wektor zawiera "<<wejscie.size()<<"elementow\n";
}

void posortuj_wektor(vector<string> wejscie)
{
        sort(wejscie.begin(), wejscie.end(), less<string>());
        wyswietl_zaw_wekt(wejscie);
}

int main()
{
        vector<string> lista_imion;
        string imie="dupa";//like a pro!
        cout<<"wpisz imiona, aby wyjsc, wprowadz q\n";
        while (imie!="q"){
                cout<<"podaj imie..\t";
                cin>>imie;
                if(imie.size()!=1)
                        lista_imion.push_back(imie);
        }
        posortuj_wektor(lista_imion);
//        wyswietl_zaw_wekt(lista_imion);
        return 0;
}
