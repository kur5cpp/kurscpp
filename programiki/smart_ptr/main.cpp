#include <iostream>

class IntPtr
{
public:
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
        if( _x)
        {
            std::cout << "D'tor called\n";
        }
        delete _x;

    }

    void operator=(IntPtr &other)
    {
        moveToMe(other);
    }

protected:
    void moveToMe(const IntPtr &other)
    {
        _x = other._x;
        other._x = 0;
    }

private:
    mutable int *_x;
};

template <class Type>
class SharedPtr
{
public:
    SharedPtr()
    : _referenceCounter(0)
    {
    }

    SharedPtr(Type *x)
    : _referenceCounter(new ReferenceCounter(x))
    {
    }

    SharedPtr(const SharedPtr &other)
    : _referenceCounter(other._referenceCounter)
    {
        _referenceCounter->increase();
    }

    ~SharedPtr()
    {
        _referenceCounter->decrease();
        releaseIfNeeded();
   }

    Type* get()
    {
        return _referenceCounter->get();
    }

    /// @todo For debugging purposes
    Type counter()
    {
        return _referenceCounter->counter();
    }

    void operator=(SharedPtr &other)
    {
        if( _referenceCounter != 0 )
        {
            _referenceCounter->decrease();
            releaseIfNeeded();
        }
        _referenceCounter = other._referenceCounter;
        _referenceCounter->increase();
    }
protected:
    void releaseIfNeeded()
   {
        if(_referenceCounter != 0 && _referenceCounter->counter() == 0)
        {
            std::cout << "D'tor called\n";
            delete _referenceCounter;
            _referenceCounter = 0;
        }
    }

private:
    struct ReferenceCounter
    {
        ReferenceCounter(Type *x)
            : _x(x)
            , _counter(1)
        {}

        ~ReferenceCounter()
        {
            delete _x;
        }

        void increase()
        {
            ++_counter;
        }

        void decrease()
        {
            --_counter;
        }

        int counter() const
        {
            return _counter;
        }
        Type* get()
        {
            return _x;
        }

        int _counter;
        Type *_x;
    };

    mutable ReferenceCounter *_referenceCounter;
};

int main()
{
//    {
//        IntPtr ptr(new int(9));
//        IntPtr ptr2 = ptr;
//    }
    {
        SharedPtr <int> ptr1(new int(8));
        std::cout << "counter=" << ptr1.counter() << "\n";
       {
            SharedPtr <int> ptr2 = ptr1;
            std::cout << "Ptr=" << (ptr1.get() == ptr2.get()) << "\n";
            std::cout << "counter=" << ptr1.counter() << "\n";
            std::cout << "counter=" << ptr2.counter() << "\n";

        }

        std::cout << "counter=" << ptr1.counter() << "\n";
    }
    std::cout << "----------------------------\n";
    {
        SharedPtr <int> ptr1(new int(1));
        std::cout << "counter=" << ptr1.counter() << "\n";
        {
            SharedPtr <int> ptr2 (new int(2));
            ptr2 = ptr1;
            std::cout << "Ptr=" << (ptr1.get() == ptr2.get()) << "\n";
            std::cout << "counter=" << ptr1.counter() << "\n";
            std::cout << "counter=" << ptr2.counter() << "\n";

        }

       std::cout << "counter=" << ptr1.counter() << "\n";
    }
    return 0;
}
