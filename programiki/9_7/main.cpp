////tablice kontynuacja...
//
//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//
//int main()
//{
//    srand(time(NULL));
//    int tab[100];
//    int najmniejsza=10, mniejsza=10;
//    for(int i=0; i<100; i++)
//    {
//        tab[i]=rand()%11;
//        if (tab[i]<najmniejsza)
//            {najmniejsza=tab[i];
//            continue;}
//        if (tab[i]<mniejsza&&tab[i]>najmniejsza) mniejsza=tab[i];
//    }
//    for(int i=0; i<100; i++)
//        cout<<tab[i]<<endl;
//    cout << "najmniejsza " << najmniejsza <<endl;
//    cout << "mniejsza " << mniejsza <<endl;
//    return 0;
//}

//sortujemy babelkowo

//#include <iostream>
//#include <stdlib.h>
//
//#define TABROZ 10
//
//using namespace std;
//
//int main()
//{
//    srand(time(NULL));
//    const int MAXCON=10;
//    int licznik;
//    double tab[TABROZ];
//    for(int i=0; i<MAXCON; i++)
//        tab[i]=rand()%1001/100.0;
//    //sortowanie
//    for(int i=0; i<MAXCON; i++)         //"trigger" z petla do..while;
//    {                                   //moze komenda?
//        int zmiana = 0;
//        for(int i=0; i<MAXCON-1; i++)
//        {
//            licznik++;
//            cout<<tab[i]<<"/"<<tab[i+1]<<endl;
//            if (tab[i]>tab[i+1]) swap(tab[i], tab[i+1]);
//            cout<<tab[i]<<"/swapped/"<<tab[i+1]<<endl;
//            zmiana = 1;
//        }
//        //if(!zmiana)break;
//    }
//    for(int i=0; i<MAXCON; i++)
//        cout<<tab[i]<<endl;
//    cout<<licznik<<endl;
//    return 0;
//}


//TODO////Przez podstawienie//do zrobienia
//
//#include <iostream>
//#include <stdlib.h>
//
//#define TABROZ 10
//
//using namespace std;
//
//int main()
//{
//    srand(time(NULL));
//    const int MAXCON=10;
//    int licznik;
//    double tabwe[TABROZ], tabwy[TABROZ], min_bierzace=10;
//    int swicz=0, indeks;
//    for(int i=0; i<MAXCON; i++)
//        tabwe[i]=rand()%101/100;
////sortowanie
//    min_bierzace=10;
//    for(int j=0; j<MAXCON; j++)
//    {
//        for(int i=0; i<MAXCON-1; i++)
//        {
//            if (tabwe[i]<min_bierzace)
//            {
//
//                indeks=i;
//            }
//        }
//    }
////wyjscie
//    for(int i=0; i<MAXCON; i++)
//        cout<<tabwy[i]<<endl;
//    cout<<licznik<<endl;
//    return 0;
//}

//sortowanie przez zliczanie

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int tab[100];
    int tabk[11] = {0};
    srand(time(NULL));
    for(int i=0; i<100; i++)
        tab[i]=rand()%11;
    for(int k=0; k<11; k++)
        for(int i=0; i<100; i++)
            if (tab[i]==k)
                tabk[k]++;
    for(int k=0; k<11; k++)
        cout<<tabk[k]<<"\t"<<k<<endl;
    for(int i=0; i<11; i++)
        for(int j=0; j<tabk[i]; j++) cout<<i;
    return 0;
}


//for(int i=0; i<20; i++)tab2[tab[i]]++; bardziej elegancko!!!



