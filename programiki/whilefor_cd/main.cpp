////ciag..
//
//#include <iostream>
//#include <math.h>
//using namespace std;
//
//int main()
//{
//    int x=5, n=3;
//    while (n>0)
//    {
//        cout << 1/(pow(x, n)) <<endl;
//        n--;
//    }
//    cout <<"koniec" << endl;
//    return 0;
//}


////losowe
//
//#include <iostream>
//#include <math.h>
//#include <stdlib.h>
//using namespace std;
//
//int main()
//{
//    srand(time(NULL));
//    int n=10;
//    while (n>0)
//    {
//        cout << rand() <<endl;
//        n--;
//    }
//    cout <<"koniec" << endl;
//    return 0;
//}

//

//#include <iostream>
//#include <math.h>
//#include <stdlib.h>
//using namespace std;
//
//int main()
//{
//    srand(time(NULL));
//    int n=10, r=1;
//    while (n>0)
//    {
//        r=rand();
//        cout << ((r%51)-20)/10<<endl;
//        n--;
//    }
//    cout <<"koniec" << endl;
//    return 0;
//}

////tablice
//
//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//
//int main()
//{
//    srand(time(NULL));
//    int tablica[10];
//    for(int i=0; i<10; i++)
//        tablica[i]=rand();
//    for(int i=0; i<10; i++) cout<<tablica[i]<<endl;
//    cout <<"koniec" << endl;
//    cout <<tablica;
//    return 0;
//}

////tablice 1,2
//
//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//
//int main()
//{
//    int tablica[10], a=0;
//    for(int i=0; i<10; i++)
//    {
//        tablica[i]=a;
//        a+=2;
//    }
//    for(int i=0; i<10; i++)
//        if (i%2==0) cout<<tablica[i]<<endl;
//    cout <<"koniec" << endl;
//    return 0;
//}

////tablice3
//
//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//
//int main()
//{
//    int tablica[10];
//    int licznik = 0, suma = 0;
//    for(int i=10; i>=0; i--)
//    {
//        tablica[i]=licznik;
//        licznik++;
//        suma+=tablica[i];
//    }
//    for(int i=0; i<10; i++)
//        cout<<tablica[i]<<endl;
//    cout <<"srednia"<<(float)suma/10<< endl; //albo 1.0*
//    return 0;
//}

////tablice5,6
//
//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//
//int main()
//{   srand(time(NULL));
//    int tablica[10], a=0, mini=0;
//    for(int i=0; i<10; i++)
//        {
//            tablica[i]=rand()%21-10;
//        }
//    mini=tablica[0];
//    for(int i=0; i<10; i++)
//        {
//            if (tablica[i]<mini) mini=tablica[i];
//            cout<<tablica[i]<<endl;
//        }
//    cout <<"minimum"<<mini<< endl;
//    return 0;
//}


////tablice 7
//
//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//
//int main()
//{
//    srand(time(NULL));
//    int tablica1[10], tablica2[10], tablica3[10], a=0, licznik=0;
//    for(int i=0; i<10; i++)
//            tablica1[i]=rand()%21-10;
//    for(int i=10; i>=0; i--)
//        {
//        tablica2[i]=licznik;
//        licznik++;
//        }
//    for(int i=0; i<10; i++)
//        {
//        tablica3[i]=tablica1[i]+tablica2[i];
//        cout<<tablica1[i]<<"/"<< tablica2[i]<<"/"<<tablica3[i]<<endl;
//        }
//}

//Zadanko ekstra

#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int tab[101];
    do
    {

    }while (getch()!=0x1B);


}
