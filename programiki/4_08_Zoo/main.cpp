#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;



class Animal
{
    public:
        Animal();
        virtual ~Animal();

        string specimen;
        int ani_mass;
        virtual void make_noise();
};

class Forfitter: public Animal
{
        Forfitter();
        virtual ~Forfitter();

        void make_noise()
        {
                cout<<"klap! klap"<<endl;
        }
};

class Zebra: public Animal
{
        Zebra();
        virtual ~Zebra();

        void make_noise()
        {
                cout<<"ihaaaaaa!!"<<endl;
        }
};

class Gnu: public Animal
{
        Gnu();
        virtual ~Gnu();

        void make_noise()
        {
                cout<<"muuuuuuuuuu!"<<endl;
        }
};

class Koza: public Animal
{
        Koza();
        virtual ~Koza();

        void make_noise()
        {
                cout<<"beeee beeeeee!"<<endl;
        }
};


class Zoo
{
  public:
        Zoo()
        {
                inventory_mass=0;
        }
        virtual ~Zoo();

        int inventory_mass;
        vector <Animal> inventory;

        void spontaneous_procreation()
        {
                switch(){
                case 1 :
                case 2 :
                case 3 :
                case 4 :
                }
        }

        void show_us_the_inventory()
        {
                int inv_count=inventory.size();
                for ( int i=0; i<inv_count; ++i){
                        cout<<inventory.at(i).specimen<<" ";
                        cout<<inventory.at(i).ani_mass<<" ";
                        inventory.at(i).make_noise();
                }
        }
};

//int Zoo::inventory_mass=0;

int main()
{
        Zoo Gucwinski_House;
       // while(Gucwinski_House.inventory_mass<1000)
     //           Gucwinski_House.spontaneous_procreation();
        return 0;
}
