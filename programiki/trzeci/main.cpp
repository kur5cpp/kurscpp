//CASIO
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    cout << "Witojcie w kalkulatorze, jakiego Swiat nie widzial!" << endl;
    cout << "<nacisnij dowolny klawisz>";
    getchar();
    char znak='a';
    int a, b, wynik;
    //menu
    if (znak!='q')
    {
        cout << string(50, '\n');
        cout << "Wprowadz zank dzialania oraz dwie liczby" << endl;
        cout << "+-*/" << endl;
        cout << "aby zakonczyc, nacisnij 'q'" << endl;
        scanf("%c %d %d", &znak, &a, &b);
        switch(znak)
        {
        case 'q': cout << "Konczymy, dziekuje za uwage";
        }
        cout << "Wynik to:", cout <<wynik;
    }
    return 0;
}
