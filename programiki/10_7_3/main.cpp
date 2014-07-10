//super program
#include <iostream>
#include <cmath>

using namespace std;


int absolut(int a)
{
    return abs(a);
}

bool prajm(int a)
{
    for(int i=2; i<a; i++)
        if (a%i==0) return 0;
        else return 1;
}

int highest(int a, int b, int c)
{
    if ((a>b)&&(a>c)) return a;
    if ((b>a)&&(b>c)) return b;
    else return c;
}

int main()
{
    int z, x, y;
 //   int licznik_menu;
   // bool runaway=0;
    char znak;
    cout<<"Witaj podrozniku!\n\n";
    cout<<"Podaj 3 liczby naturalne do dalszych obliczen.\n";
    cin>>z>>x>>y;
    //
    //menu
   // while (!runaway)
   // {
        cout<<string(50, '\n');
        cout<<"Czesc, wybierz 1, 2 lub 3\n" << endl;
        cout<<"1. Wyswietla wartosc bezwzgledna pierwszego argumentu\n";
        cout<<"2. Zwraca 1 jesli pierwsza podana liczba jest liczba pierwsza\n";
        cout<<"3. Zwraca najwieksza liczbe z podanej trojki.\n";
        cout<<"Aby zakonczyc, nacisnij 'q'..:)" << endl<<endl;
        cin>>znak;
        switch(znak)
        {
            case 'q': {/*runaway++*/; cout<<"Konczymy, dziekuje za uwage"; break;}
            case '1': {/*runaway++*/; cout<<"Wynik to:",cout<<absolut(z); break;}
            case '2': {/*runaway++*/; cout<<"Wynik to:",cout<<prajm(z); break;}
            case '3': {/*runaway++*/; cout<<"Wynik to:",cout<<highest(z,x,y);break;}
        }
    //}
    return 0;
}
