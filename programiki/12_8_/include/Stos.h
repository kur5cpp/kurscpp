#ifndef STOS_H
#define STOS_H
#include <iostream>

using namespace std;


class Stos
{
        public:
                Stos();
                virtual ~Stos();
                int dlugosc;
                int kontener[100];

                int stos_push(int x);
                int stos_pop();
                int stos_ile();
                void stos_wyswietl();
        protected:
        private:
};

#endif // STOS_H
