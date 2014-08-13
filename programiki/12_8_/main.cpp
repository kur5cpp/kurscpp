#include <iostream>
#include "Stos.h"

using namespace std;

int main()
{
    int a;
    Stos Test;
    cout<<Test.stos_ile()<<endl<<endl;
    Test.stos_push(23);
    Test.stos_push(24);
    Test.stos_push(35);
    Test.stos_wyswietl();
    a=Test.stos_pop();
    cout<<a<<endl<<endl;
    Test.stos_wyswietl();
    cout << "Hello world!" << endl;
    return 0;
}
