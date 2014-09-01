#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int i=7;
    while(i>5) i--;
    cout<<--i<<endl;
    std::cout << "sizeof(bool) = " << sizeof( bool ) << std::endl;
    std::cout << "sizeof(char) = " << sizeof( char ) << std::endl;
    std::cout << "sizeof(unsigned char) = " << sizeof( unsigned char ) << std::endl;
    std::cout << "sizeof(wchar_t) = " << sizeof( wchar_t ) << std::endl;
    std::cout << "sizeof(short) = " << sizeof( short ) << std::endl;
    std::cout << "sizeof(unsigned short) = " << sizeof( unsigned short ) << std::endl;
    std::cout << "sizeof(int) = " << sizeof( int ) << std::endl;
    std::cout << "sizeof(unsigned int) = " << sizeof( unsigned int ) << std::endl;
    std::cout << "sizeof(long) = " << sizeof( long ) << std::endl;
    std::cout << "sizeof(unsigned long) = " << sizeof( unsigned long ) << std::endl;
    std::cout << "sizeof(long long) = " << sizeof( long long ) << std::endl;
    std::cout << "sizeof(float) = " << sizeof( float ) << std::endl;
    std::cout << "sizeof(double) = " << sizeof( double ) << std::endl;
    std::cout << "sizeof(long double) = " << sizeof( long double ) << std::endl;
    return 0;
}
