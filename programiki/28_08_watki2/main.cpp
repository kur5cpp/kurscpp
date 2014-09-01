#include <iostream>
#include <unistd.h>
#include <string>
#include <thread>
#include <mutex>

using namespace std;


class Zwierz
{
        public:
                int napite;
                Zwierz()
                {
                        imie_zwierza="testowe";
                        napite=3;
                }

                Zwierz(string imie)
                {
                        imie_zwierza=imie;
                        napite=3;
                }
                virtual ~Zwierz(){}
                string imie_zwierza;
                bool spragnione;

//                void idz_do_studni()
//                {
//                        while(napite<=3){
//                                sleep(1);
//                                Zycie::akt_picia();
//                        }
//                }

                void zycie_zwierza()
                {
                        while(napite>0){
                                wyswietl_zwierze();
                                sleep(2);
                                napite--;
                                if (napite==1){
                                        wyswietl_zwierze();
                                        spragnione=true;
                                }
                        }
                }

                void wyswietl_zwierze(){
                        cout<<imie_zwierza<<"\t"<<napite<<endl;
                }
};

class Wodopoj
{
public:
        int pojemnosc;

        Wodopoj()
        {
                pojemnosc=10;
        }

        Wodopoj(int ile_dolac)
        {
                pojemnosc=ile_dolac;
        }

        virtual ~Wodopoj(){}

        void zycie_wodopoju()
        {
                for(;;){
                        sleep(1);
                        pokaz_wodopoj();
                        if(pojemnosc<10)
                                pojemnosc++;
                }
        }

        void pokaz_wodopoj()
        {
                cout<<"W wodopoju jest: "<<pojemnosc<<" wody."<<endl;
        }
};

class Zycie
{
public:
        Zycie(){}
        virtual ~Zycie(){}

        Zwierz test;
        Wodopoj studnia;

        void akt_picia(Wodopoj& studnia, Zwierz& test)
        {
                while(test.napite<3){
                        test.napite++;
                        studnia.pojemnosc--;
                        sleep(1);
                }
        }

        void mechanizm_picia()
        {
                for(;;){
                        if(test.spragnione){
                                akt_picia(studnia, test);
                                test.spragnione=false;
                        }
                }
        }

        void z_koksem()
        {
                thread watek_1(Zycie.test.zycie_zwierza);
                thread watek_2(zycie_wodopoju);
                thread watek_3(mechanizm_picia);
                watek_1.join();
                watek_2.join();
                watek_3.join();
        }
};

int main()
{
        Zycie jazda;
        jazda.z_koksem();
        return 0;
}
