#include <iostream>
#include <fstream>

using namespace std;


//int main()
//{
//    ofstream plik;
//    plik.open("dane1.txt");
//    for (int i = 0; i<9; i++)
//        plik <<i<<endl;
//    plik.close();
////
//    plik.open("dane.txt");
//    int a=5, b=4, c=3;
//    plik<<a<<"\n"<<b<<endl<<c<<endl;
//    plik<<endl<<++a;
//    plik.close();
//
//    cout << "End is a matter of time" << endl;
//    return 0;
//}

int main()
{
    ofstream plik;
    plik.open("dane1.txt");
    if (plik.good()==true)
        for (int i = 0; i<9; i++)
            plik <<i<<endl;
    plik.close();
//
    plik.open("dane.txt");
    if (plik.good()==true)
    {
        int a=5, b=4, c=3;
        plik<<a<<"\n"<<b<<endl<<c<<endl;
        plik<<endl<<++a;
    }
    plik.close();

    cout << "Resistance is futile" << endl;
    return 0;
}
