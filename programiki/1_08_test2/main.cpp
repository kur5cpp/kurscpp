#include <iostream>
#include <vector>
#include <A.h>
#include <cstdlib>


using namespace std;

int main()
{
    vector <int> wekt;

    for (int i=0; i<50; i++){
        wekt.push_back(rand()%100);
    }

    for (int i=0; i<wekt.size()-1; i++){
        cout<<wekt[i]<<"\t";
    }


    for ()
    cout << "Hello world!" << endl;
    return 0;
}
