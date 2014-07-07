//CASIO
#include <iostream>

using namespace std;

int main()
{
    cout << "Witojcie w kalkulatorze, jakiego Swiat nie widzial!" << endl;
    cout << "<nacisnij ENTER>";
    cin.get();
    char znak='a';
    int a, b, wynik;
    //menu
    while (znak!='q')
    {
        cout << string(50, '\n');
        cout << "Wprowadz zank dzialania oraz dwie liczby\n" << endl;
        cout << "Wynik to:\n", cout <<wynik;
        cout << "\nAby zakonczyc, nacisnij 'q'.. i dwie liczby.. :)" << endl;
        cin >> znak >> a >> b;
        switch(znak)
        {
            case 'q': cout << "Konczymy, dziekuje za uwage"; break;
            case '+': wynik=a+b; cout << "Wynik to:", cout <<wynik; break;
            case '-': wynik=a-b; cout << "Wynik to:", cout <<wynik; break;
            case '/': wynik=a/b; cout << "Wynik to:", cout <<wynik; break;
            case '*': wynik=a*b; cout << "Wynik to:", cout <<wynik; break;
        }
    }
    return 0;
}
