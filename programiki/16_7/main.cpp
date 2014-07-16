#include <iostream>
#include <stdlib.h>
using namespace std;

void free_tab(void **A)
{
    if (!A) return;
    for(int i=0; A[i]; i++) free(A[i]);
    free(A);
}
void ** alloc_tab(int M, int N, int element_size)
{
    void **A;
    if((A=(void**)calloc(M+1, sizeof(void*)))==NULL) return NULL;
    for(int i=0; i<M; i++)
        if(!(A[i]=calloc(N, element_size))) goto BLAD;
    A[M]=NULL;
    return A;

    BLAD: free_tab(A);
    return NULL;
}

int main()
{
    float **A;
    if ((A=(float**)alloc_tab(10, 5, sizeof(float)))==NULL) exit(1);
    cout<<"Pamiec zalokowana";
    A[4][3]=3.141592;
    cout<<"Element 1="<<A[3][3]<<"\n";
    cout<<"Element 2="<<A[4][3]<<"\n";
    free_tab((void **)A);
    cin.clear();
    cin.ignore();
    cin.get();
}
