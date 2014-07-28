#ifndef ULAMEK2_H
#define ULAMEK2_H


class Ulamek2
{
    public:
        Ulamek2();
        virtual ~Ulamek2();
        int licznik, mianownik, temp;
        void ustaw_wartosci(int x, int y);
        void wyswietl_ulamek(int licznik, int mianownik);
        void wyswietl_odwr(int licznik, int mianownik);
        void dodaj_ulamek(int li, int mi);
    protected:
    private:
};

#endif // ULAMEK2_H
