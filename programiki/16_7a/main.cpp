#include <iostream>
#include <stdlib.h>
using namespace std;

void wyswietl(int**, int n);
int ** tabliczka_mnizenia(int);
int wprow_dan();
void free_tab(void **A);
void ** alloc_tab(int M, int N, int el_size);

int main()
{
    int n=wprow_dan();
    int **A=tabliczka_mnizenia(n);
    wyswietl(A, n);
    free_tab((void **)A);
    cin.clear();
    cin.ignore();
    cin.get();
}

int wprow_dan()
{
    int n;
    cout<<"Wprowadz maksimum naszej tabliczki mnozenia"<<"\n";
    cin>>n;
    return n;
}

void wyswietl(int **A, int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout.width(4);
            cout<<A[i][j];
        }
        cout<<"\n";
    }
}



int ** tabliczka_mnizenia(int n)
{
    int **A;
    if ((A=(int**)alloc_tab(n, n, sizeof(int)))==NULL) exit(1);
        cout<<"Pamiec zalokowana"<<"\n";

    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            A[i][j]=(i+1)*(j+1);
    return A;
}

void free_tab(void **A)
{
    if (!A) return;
    for(int i=0; A[i]; i++) free(A[i]);
    free(A);
}

void ** alloc_tab(int M, int N, int el_size)
{
    void** A;
    if ((A = (void**)calloc(M+1, sizeof(void*))) == NULL) return NULL;
    for (int i = 0; i < M; ++i)
        if (!(A[i] = calloc(N, el_size))) goto BLAD;
    A[M] = NULL;
    return A;

    BLAD: free_tab(A);
    return NULL;
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