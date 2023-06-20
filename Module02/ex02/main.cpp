#include "Fixed.hpp"


int main() {

    // std::cout << " ---- These are my testers -----" << std::endl;
    // Fixed a(5);
    // Fixed b(3);

    // // Test comparison operators
    // std::cout << "Testing the greater than: "<< (a > b) << std::endl;  
    // std::cout << "Testing the greater equal : "<< (a >= b) << std::endl; 
    // std::cout << "Testing the less than : "<< (a < b) << std::endl;  
    // std::cout << "Testing the less equal : "<< (a <= b) << std::endl; 
    // std::cout << "Testing the = equal : "<< (a == b) << std::endl;
    // std::cout << "Testing the != equal : "<< (a != b) << std::endl; 



    // // Test arithmetic operators
    // Fixed c = a + b;
    // std::cout << "Testing the Addition : "<< c.getValue() << std::endl; 

    // Fixed d = a - b;
    // std::cout << "Testing the Subtraction : " << d.getValue() << std::endl; 

    // Fixed e = a * b;
    // std::cout << e.getValue() << std::endl; 

    // Fixed f = a / b;
    // std::cout << "Testing the Division : " << f.getValue() << std::endl; 

    // // Test increment and decrement operators
    // std::cout << "Testing the pre-incremet : " << a.getValue() << " " << (++a).getValue() << std::endl;     
    // std::cout << "Testing the post-incremet : " << a.getValue() << " " << (a++).getValue() << std::endl; 
    // std::cout << "Testing the post-value : " << a.getValue() << std::endl;

    // std::cout << (--b).getValue() << std::endl;
    // std::cout << (b--).getValue() << std::endl; 
    // std::cout << b.getValue() << std::endl;  

    // std::cout << "---END OF MY TESTER ----- " <<std::endl;

    std::cout << "---- This is the subject tester ----" << std::endl;
    
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;
    std::cout << Fixed::min( a, b ) << std::endl;

    return 0;
}