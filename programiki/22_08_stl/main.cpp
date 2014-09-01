#include <iostream>
#include <vector>
#include <algorithm>
#include <stdlib.h>

using namespace std;


class Zespolona
{
public:
        int r, e;
        Zespolona()
        {
                r=rand()%101;
                e=rand()%101;
        }
};

void wektor_wyswietl(Zespolona wejscie)
{
        cout<<wejscie.r<<"\t"<<wejscie.e<<endl;
}

bool porownaj(Zespolona x, Zespolona y)
{
        if (x.e>y.e) return 1;
        else return 0;
}


int main()
{
        srand(time(NULL));
        Zespolona a, b, c;
        vector<Zespolona> wektorek;
        wektorek.push_back(a);
        wektorek.push_back(b);
        wektorek.push_back(c);
        for_each(wektorek.begin(), wektorek.end(), wektor_wyswietl);
        sort(wektorek.begin(), wektorek.end(), porownaj);
        for_each(wektorek.begin(), wektorek.end(), wektor_wyswietl);
        cout << "gotowe!" << endl;
        return 0;
}
