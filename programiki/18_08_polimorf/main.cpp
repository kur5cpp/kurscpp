#include <iostream>
#include <iomanip>
using namespace std;


class Parent
{
public:

        virtual void print_out() =0;
        Parent(){}
};

class Child_one:public Parent
{
public:
        Child_one(){}
        friend ostream& operator <<(ostream& out, Child_one &wejscie);
        friend istream& operator >>(istream& in, Child_one &wyjscie);

        void print_out()
        {
                cout<<"Child_one\n";
        }
private:
        int x=1, y=2, z=3;


};

class Child_two:public Parent
{
public:
        Child_two(){}
        void print_out()
        {
                cout<<"Child_two\n";
        }
};

ostream& operator <<(ostream& out, Child_one &wejscie)
{
        out<<wejscie.x<<"\t"<<wejscie.y<<"\t"<<wejscie.z<<endl;
        return out;
}

istream& operator >>(istream& in, Child_one &wyjscie)
{
        int x, y, z;
        in>>x;
        wyjscie.x=x;
        in>>y;
        wyjscie.y=y;
        in>>z;
        wyjscie.z=z;
        return in;
}

int main()
{
    float cout_test=0.1234567;
    cout<<setprecision(5)<<fixed<<cout_test<<endl;

        Child_one test_parr;
        cout<<test_parr;
        cin>>test_parr;
        cout<<test_parr;
    Parent* p_to_table[2];
    Child_one kid1;
    Child_two kid2;
//    Child_one* p_kid1 = &kid1;
//    Child_two* p_kid2 = &kid2;

    p_to_table[0]=&kid1;
    p_to_table[1]=&kid2;

    p_to_table[0]->print_out();
    p_to_table[1]->print_out();

    cout << "Hello world!" << endl;
    return 0;
}

//gdzie kontenery baranie? :)
