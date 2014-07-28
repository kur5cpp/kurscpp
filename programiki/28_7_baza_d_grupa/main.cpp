#include <iostream>
#include "baza.h"

using namespace std;

int main()
{
    t_osoba tablica[2];
    t_osoba * w_tablica = tablica;
    w_tablica = db_init();
    db_print(tablica);
    return 0;
}
