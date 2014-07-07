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

//wielka suma extended

#include <iostream>

using namespace std;

int main()
{
    int a=1, suma=0;
    char tn='T';
    while(tn=='T')
    {
        cout << "Podawaj liczby do zsumowania:" << endl;
        cin >> a;
        suma+=a;
        cout<<"dotychczasowa suma:\n";
        cout<<suma<<endl;
        cout << "Czy chcesz kontynuowac? (T/N)"<<endl;
        cin>>tn;
    };
    cout<<"Dziekujemy za skorzystanie z naszych uslug!!";
    return 0;
}
