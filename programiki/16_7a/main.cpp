#include <iostream>
#include <stdlib.h>
#include "funkc1.h"
#include "funkc2.h"
#include "menu.h"
#include "prostefunkcje.h"
#include "18_7_1.h"
#include "struktury.h"

using namespace std;


int main()
{
//    struc_1();
//    struc_2_pointers();
    allowance_list();
//  int n=wprow_dan();
//    wyrazenia();
//    licznzik(n);
//    cout << "fdsafas";
//    licznzik(10);
//    cout << "fdsaffdasfdasas";
//    licznzik(15);
   // int **A=tabliczka_mnizenia(n);
   // menu();
   // wyswietl(A, n);
   // free_tab((void **)A);
}

////////////////////////////////////////////
//wersja j
////////////////////////////////////////////

//#include <iostream>
//#include <stdlib.h>
//
//using namespace std;
//
//void zwolnij_tab(void **A)
//{
//    if (!A) return;
//    for( int i = 0; A[i]; ++i )
//        free(A[i]);
//    free(A);
//}
//
//void** przydziel_tab(int M, int N, int el_size)
//{
//    void** A;
//    if ((A = (void**)calloc(M+1, sizeof(void*))) == NULL) return NULL;
//    for (int i = 0; i < M; ++i)
//        if (!(A[i] = calloc(N, el_size))) goto BLAD;
//    A[M] = NULL;
//    return A;
//
//    BLAD: zwolnij_tab(A);
//    return NULL;
//}
//
//void print(int** table, int size)
//{
//    cout << "X" << "\t";
//    for(int j = 0; j < size; ++j)
//        cout << j + 11 << "\t";
//    cout << endl;
//
//
//  for(int i = 0; table[i] != NULL; ++i)
//    {
//        cout << endl;
//        cout << i + 11 << " |  ";
//
//        for(int j = 0; j < size; ++j)
//            cout << table[i][j] << "\t";
//    }
//}
//
//int** create_multiplication_table(int size)
//{
//    int** A;
//        if((A=(int**)przydziel_tab(size,size,sizeof(int))) == NULL) exit(1);
//            cout << "Zaalokowano pamiec! " << endl;
//
//    for(int i = 0; A[i] != NULL; ++i)
//    {
//        for(int j = 0; j < size; ++j)
//        {
//            A[i][j] = (i + 11) * (j + 11);
//        }
//    }
//    return A;
//}
//
//int enter_date()
//{
//    cout << "Type size of table: " << endl;
//    int size;
//    cin >> size;
//    return size;
//}
//
//int main()
//{
//    int size = enter_date();
//
//    int** multi_table = create_multiplication_table(size);
//
//    print(multi_table, size);
//
//    zwolnij_tab((void**)multi_table);
//
//    //string nazwa("matma csfs sdsfd");
//    //cout.width(50);
//    //cout << internal << nazwa;
//
//    return 0;
//}
