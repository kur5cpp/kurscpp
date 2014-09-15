#include <iostream>

class IntPtr //RAII auto_ptr
{
public:
    IntPtr();
    IntPtr(int *x)
    : _x(x)
    {}

    IntPtr(const IntPtr &other)
    : _x(0)
    {
        moveToMe(other);
    }

    ~IntPtr()
    {
        delete _x;
    }

    void operator=(const IntPtr &other)
    {
        moveToMe(other);
    }
    int *_x;
protected:
    void moveToMe(const IntPtr &other)
    {
        _x = other._x;
        *other._x = 0;
    }
private:
    //int *_x;
};

using namespace std;

int main()
{
    IntPtr A(new int(10));

    *A._x=10;
    cout<<*A._x<<endl;
    IntPtr B=A;
    cout<<*B._x<<endl;
    cout << "Hello world!" << endl;
    return 0;
}
