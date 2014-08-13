#include <iostream>
#include <stdlib.h>

using namespace std;

class P
{
public:
    int a;
    P(){a=rand()%11;}
};

int main()
{
    srand(time(NULL));
    try{
        P *wsk= new P[10];
        P *wsk2=new P[9];
        for(int i=0; i<10; i++){
        cout<<wsk[i].a;
        cout<<endl;
        }
            cout<<endl;

        for(int i=0; i<10; i++){
        if (i!=1)
            wsk2[i]=wsk[i];
        }

        for(int i=0; i<10; i++){
            cout<<wsk2[i].a;
            cout<<endl;
        }

        for(int i=0; i<10; i++){
            delete wsk[i];
        }
    }catch(bad_alloc){
        cout<<"no i lipa!";
    }



//
//    delete []wsk2;
    return 0;

}
