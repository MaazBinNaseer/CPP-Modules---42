#include "whatever.hpp"

int main()
{
    /*
    * ------------------------ INT TESTING --------------------
    */
    std::cout << "---------[ INT TEST ] ---------" << std::endl;
    int a = 2;
    int b = 3;
   
    ::swap(a, b);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::cout << "---------------------------------------------" << std::endl;

    /*
    * ------------------------ STRING TESTING --------------------
    */
    std::cout << "---------[ STRING TEST ] ---------" << std::endl;
    std::string c = "chainel1";
    std::string d = "chainel2";

    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    

}