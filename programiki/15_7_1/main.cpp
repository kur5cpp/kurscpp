////inline
//
//#include <iostream>
//using namespace std;
//
//inline int dodaj(int, int);
//
//int main()
//{
//    int a=1, b=2, c=0;
//    c = dodaj(a,b);
//    cout << c << endl;
//    return 0;
//}
//
//inline int dodaj(int a, int b)
//{
//    return a+b;
//}

////dynamiczna tablica
//
//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//
//int main()
//{
//    int rozmiar;
//    double *tablica;
//    cout<<"Ile liczb chcesz wprowadzic?";
//    cin>>rozmiar;
//    if (tablica=(double*)calloc(rozmiar, sizeof(double)))
//    {
//        for(int i=0; i<rozmiar; i++)
//        {
//            *(tablica+i)=100;
//            cout<<tablica[i];
//        }
//        free(tablica);
//    }
//    return 0;
//}


//wiecej na tablicach

#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    srand(time(NULL));
    int rozmiar, nowy_rozmiar;
    double *tablica;
    cout<<"Ile liczb chcesz wprowadzic?";
    cin>>rozmiar;
    if (tablica=(double*)calloc(rozmiar, sizeof(double)))
    {
        for(int i=0; i<rozmiar; i++)
        {
            *(tablica+i)=rand()%101-50;
            cout<<tablica[i]<<endl;
        }
        free(tablica);
    }
    return 0;
}
