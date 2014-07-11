//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    char tab[50];
//    char tab1[50];
//    char tab2[50];
//    int numer;
////    cin>>tab;
////    cin>>tab;
////    cout <<tab<< endl;
////    for(int i=0; i<50; i++)
////        cout<<tab[i];
//
//
////chartab(char tab[], dlu)
////{
////    return
////}
//
//    cin.getline(tab,50);
//    cin.getline(tab1,50);
//    cin>>numer;
//    cin.get();
//    cin.getline(tab2,50);
//    cout<<tab<<tab1<<numer<<tab2;
//
//    return 0;
//}

//CASIO ADVANCED
#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    cout << "Witojcie w kalkulatorze, jakiego Swiat nie widzial!" << endl;
    cout << "<nacisnij ENTER>";
    cin.get();
    char tab[10];
    char taba[10], tabb[10];
    char znak='a';
    int a, b, wynik;
    int slicz=0;
    //menu
//    while (znak!='q')
//    {
//        cout << string(50, '\n');
//        cout << "Wprowadz dzialanie\n" << endl;
//        cout << "Wynik to:\n", cout <<wynik;
//        cout << "\nAby zakonczyc, nacisnij 'q'.. i dwie liczby.. :)" << endl;
//        cin>>a>>znak>>b;
//        switch(znak)
//        {
//            case 'q': cout << "Konczymy, dziekuje za uwage"; break;
//            case '+': wynik=a+b; cout << "Wynik to:", cout <<wynik; break;
//            case '-': wynik=a-b; cout << "Wynik to:", cout <<wynik; break;
//            case '/': wynik=a/b; cout << "Wynik to:", cout <<wynik; break;
//            case '*': wynik=a*b; cout << "Wynik to:", cout <<wynik; break;
//        }
//    }
    cin.getline(tab,10);
    for(int i=0; i<10; ++i)
    {
        if(tab[i]=='*'||'/'||'+'||'-')
        {
            znak==tab[i];
            slicz=1;
        }
        if(slicz==0)
        {
            taba[i]=tab[i];
        }
        if(slicz==1)
        {
            tabb[i]=tab[i];
        }
    }


    a = atoi(taba);
    cout<<taba;


    return 0;
}

//atoi(char tab[])


