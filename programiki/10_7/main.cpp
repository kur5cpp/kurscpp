//10 liczb pierwszych do tablicy

#include <iostream>

using namespace std;

int main()
{
    int x=0;
    int tab[10];
    while(x<10)
    {
        for(int i=2; i<100; i++) //x<10 indeks naszej tablicy jako warunek
        {
            int pierwsza=1;
            for(int d=2; d<i; d++)
            {
                if(i%d==0)
                {
                    pierwsza = 0;
                    break;
                }
            }
            if(pierwsza)
            {
                cout<<i<<endl;
                tab[x]=i;
                x++;
            }
        }
    }
    for(int i=0; i<10; i++)
        cout<<tab[i]<<endl;
    cout << "Hello world!" << endl;
    return 0;
}
