#ifndef KONTENEROWIEC_H
#define KONTENEROWIEC_H
#include <vector>
#include <fstream>
#include <string>
#include <iostream>
#include "Kontener.h"

using namespace std;

class Kontenerowiec
{
        public:
                Kontenerowiec();
                virtual ~Kontenerowiec();
                vector<Kontener> zbiornik;
                void do_it();
                void kont_wczytaj_plik();
                void kont_policz(string linia);
                void kont_wyswietl();
                void kont_mrowka(char cyferka);
        protected:
        private:
};

#endif // KONTENEROWIEC_H
