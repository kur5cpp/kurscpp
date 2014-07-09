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

#include <iostream>
#include <stdlib.h>

#define TABROZ 10

using namespace std;

int main()
{
    srand(time(NULL));
    const int MAXCON=10;
    int tab[TABROZ];
    int bufor=0;
    for(int i=0; i<MAXCON; i++)
        tab[i]=rand()%11;
    //sortowanie
    for(int i=0; i<MAXCON; i++)         //"trigger" z petla do..while;
    {                                   //moze komenda?
        for(int i=0; i<MAXCON-1; i++)
        {
            cout<<tab[i]<<"/"<<tab[i+1]<<endl;
            if (tab[i]>tab[i+1]) swap(tab[i], tab[i+1]);
            cout<<tab[i]<<"/swapped/"<<tab[i+1]<<endl;
        }
    }
    for(int i=0; i<MAXCON; i++)
        cout<<tab[i]<<endl;
    return 0;
}


