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

#include <iostream>

using namespace std;

int main()
{
    int a=1, suma=0, piatki=0, maximum=0,licznik=0;
    float srednia;
    char tn='T';
    while(tn=='T')
    {
        cout << "Podawaj liczby do zsumowania:" << endl;
        cin >> a;
        suma+=a;
        licznik++;
        if(a==5) piatki++;
        if(a>maximum) maximum=a;
        cout<<"dotychczasowa suma:\n";
        cout<<suma<<endl;
        cout << "Czy chcesz kontynuowac? (T/N)"<<endl;
        cin>>tn;
    };
    srednia=(float)suma/licznik;
    cout<<"Srednia wynosi: "<<srednia<<endl;
    cout<<"Maximum: "<<maximum<<endl;
    cout<<"Piateczki: "<<piatki<<endl;
    cout<<"Dziekujemy za skorzystanie z naszych uslug!!";
    return 0;
}
