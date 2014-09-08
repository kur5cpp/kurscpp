#include <iostream>
#include <vector>
#include <A.h>
#include <cstdlib>
//
//struct S{
//  char a;
//  int s;
//};
//
//using namespace std;

//    void f(int x)
//    {
//        if(x>0){
//                cout<<x<<" ";
//                f(x-1);
//        }
//    }
//
//Struct TreeNode
//{
//        int x;
//        TreeNode *l, *r;
//        TreeNode(){l = r = nullptr; x = 0;}
//}
//
//const int LEFT = 1;
//const int RIGHT = 2;

//int fib(int x)
//{
//        if(x==0) return 1;
//        if(x==1) return 1;
//        return fib(x-2)+fib(x-1);
//}





int main()
{
union A{
unsigned char t[2];
unsigned short s;
};

A unia;
unia.s=512;
cout<<(int)unia.t[1]<<endl;


    //vector <int> wekt;

//    for (int i=0; i<50; i++){
//        wekt.push_back(rand()%100);
//    }
//
//    for (int i=0; i<wekt.size()-1; i++){
//        cout<<wekt[i]<<"\t";
//    }
//    A ass(1);
//    throw "halo";
//    cout<<"ex"<<endl;
//        A* a=new A(1);
//        throw 666;
//    for(int i=0; i<30; i++)
//        cout<<fib(i)<<endl;

//    cout << "Hello world!" << endl;
    return 0;
}
