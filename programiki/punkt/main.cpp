#include <iostream>
#include "Punkt_1D.h"
#include "Punkt_2D.h"
#include "Punkt_3d.h"

using namespace std;


int main()
{
    Punkt_3d pierwsze(1,2,3);
    pierwsze.wyswietl_3d();
    cout<<pierwsze.x<<pierwsze.y<<pierwsze.z;
    cout << "Hello world!" << endl;
    return 0;
}
