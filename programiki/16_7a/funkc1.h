#ifndef FUNKC1
#define FUNKC1
#include <stdlib.h>


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

int ** tabliczka_mnizenia(int n)
{
    int **A;
    if ((A=(int**)alloc_tab(n, n, sizeof(int)))==NULL) exit(1);
        //cout<<"Pamiec zalokowana"<<"\n";

    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            A[i][j]=(i+1)*(j+1);
    return A;
}


#endif // FUNKC1
