#ifndef A_H
#define A_H

#include <iostream>
#include <vector>

using namespace std;

class A {
  public:
    A(const A &arg)
    {
        cout << "A::A(&" << arg.x << ")" << endl;
        this->x = arg.x;
    }

    A(int x)
    {
        cout << "A::A(" << x << ")" << endl;
        this->x = x;
    }
    ~A()
    {
        cout << "A::~A(" << x << ")" << endl;
    }
    int x;
};

#endif // A_H
