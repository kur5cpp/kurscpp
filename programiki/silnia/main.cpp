////silnia

//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    int a, silnia=1;
//    cout << "Podaj liczbe, z ktorej obliczymy silnie.." << endl;
//    cin >> a;
//    while(a>0)
//    {
//        silnia*=a;
//        a--;
//    };
//    cout  <<"nasza silnia:\n";
//    cout << silnia;
//    return 0;
//}


////wielka suma
//
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    int a=1, suma=0;
//    while(a!=0)
//    {
//        cout << "Podawaj liczby do zsumowania:" << endl;
//        cin >> a;
//        suma+=a;
//        cout<<"dotychczasowa suma:\n";
//        cout<<suma<<endl;
//    };
//    return 0;
//}


////wielka suma extended
//
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    int a=1, suma=0;
//    char tn='T';
//    while(tn=='T')
//    {
//        cout << "Podawaj liczby do zsumowania:" << endl;
//        cin >> a;
//        suma+=a;
//        cout<<"dotychczasowa suma:\n";
//        cout<<suma<<endl;
//        cout << "Czy chcesz kontynuowac? (T/N)"<<endl;
//        cin>>tn;
//    };
//    cout<<"Dziekujemy za skorzystanie z naszych uslug!!";
//    return 0;
//}

//wielka suma ultimate
//wielka suma extended

//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    int a=1, suma=0, piatki=0, maximum=0,licznik=0;
//    float srednia;
//    char tn='T';
//    while(tn=='T')
//    {
//        cout << "Podawaj liczby do zsumowania:" << endl;
//        cin >> a;
//        suma+=a;
//        licznik++;
//        if(a==5) piatki++;
//        if(a>maximum) maximum=a;
//        cout<<"dotychczasowa suma:\n";
//        cout<<suma<<endl;
//        cout << "Czy chcesz kontynuowac? (T/N)"<<endl;
//        cin>>tn;
//    };
//    srednia=(float)suma/licznik;
//    cout<<"Srednia wynosi: "<<srednia<<endl;
//    cout<<"Maximum: "<<maximum<<endl;
//    cout<<"Piateczki: "<<piatki<<endl;
//    cout<<"Dziekujemy za skorzystanie z naszych uslug!!";
//    return 0;
//}


////potega
//
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    int x=0, y=0;
//    int wynik=1;
//    cin>>x>>y;
//    do
//    {
//        y--;
//        wynik*=x;
//    }while (y>0);
//    cout<<wynik<<endl;
//    return 0;
//}

////tabliczka mnozenia
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    int x=1, y=1;
//    while ()
//    cout<<x*y;
//    return 0;
//}


////ERA FORA
////x----100
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    for(int x=0; x<=100; x++) cout<<x<<" ";
//    return 0;
//}

////rozne fora
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
////    for(int x=1; x<=99; x++) if (x%2>0) cout<<x<<" ";
//    /*alternatywa*/ for(int x=1; x<=99; x+=2) cout<<x<<" ";
//return 0;
//}

////kwadrat o boku x
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    int x, x1;
//    cin>>x;
//    x1=x;
//    for(int ii=0; x1>ii; ii++)
//        {
//        for(int i=0; x>i; i++, cout<<"*");
//        cout<<endl;
//        };
//    return 0;
//}

//choinka
#include <iostream>

using namespace std;

int main()
{
    int x, s, g;
    cin>>x;
    for(int i=1; x+1>i; i++) //rzedy
        {
        for(int s=x-i; s!=0; s--, cout<<"a");
        for(g=2*i-1; g>0 ;g-- , cout<<"b");
        for(int s=x-i; s!=0; s--, cout<<"a");
        cout<<endl;
        };
    return 0;
}

//ZADANKA
//wyznacz n-ty element ciagu fibonacciego
//liczby nieparzyste  z przedzialu 3-99
//wyswietl prostokat a*b
//wyswietl choinke
//sprawdz czy zadana liczba n jest liczba pierwsza..
//projecteuler.net
//ideone.com
//http://agata.brzozowska.staff.iiar.pwr.wroc.pl/
//http://marek.piasecki.staff.iiar.pwr.wroc.pl/dydaktyka/pp/index.html
//http://roman.ptak.staff.iiar.pwr.wroc.pl/
