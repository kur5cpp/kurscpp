#ifndef FUNKC2
#define FUNKC2
#include <iostream>

using namespace std;


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


#endif // FUNKC2
