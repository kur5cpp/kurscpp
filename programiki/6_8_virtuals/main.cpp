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
    Zwierz *wsk_z;
    Kaczka *wks_k;
    wsk_z = &kwa;

    wks_k=dynamic_cast<Kaczka*>(wsk_z);

    wks_k->daj_glos();
    wsk_z->daj_glos();
    return 0;
}
