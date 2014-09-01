#include <iostream>

using namespace std;


class Base
{
  int & operator[] (const int i)
  {
     //...
  }

  Base(int N)
  {
    t = new int[N];
  }

  ~Base()
  {
     //...
  }
  int *t, N;
};


int main()
{
    cout << "Hello world!" << endl;
    return 0;
}


//vector <Base> v;
//v.push_back(Base(10));
//v.push_back(Base(7));
