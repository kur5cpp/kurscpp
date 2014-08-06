#include <iostream>
#include "Zwierz.h"
#include "Kaczka.h"
#include "Piesio.h"

using namespace std;

void zrob_glos(Zwierz &f)
{
    f.daj_glos();
}

int main()
{
    Zwierz Z;
    Kaczka kwa;
    zrob_glos(kwa);
    zrob_glos(Z);

    return 0;
}
