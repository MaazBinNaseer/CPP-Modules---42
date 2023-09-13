/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 13:20:24 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/09/13 12:54:07 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

// class Awesome
// {
//     private:
//         int _n;
//     public:
//         Awesome(void): _n(0) {}
//         Awesome(int n): _n(n) {}
//         Awesome & operator=(Awesome & a) {_n = a._n; return *this;}
//         bool operator==(Awesome const & rhs) const {return(this->_n == rhs._n);}
//         bool operator!=(Awesome const &rhs) const {return(this->_n != rhs._n);}
//         bool operator>(Awesome const &rhs) const {return(this->_n > rhs._n);}
//         bool operator<(Awesome const &rhs) const {return(this->_n < rhs._n);}
//         bool operator>=(Awesome const &rhs) const {return(this->_n >= rhs._n);}
//         bool operator <=(Awesome const &rhs) const {return(this->_n <= rhs._n);}
//         int get_n()const {return _n;}    
// };  

// std::ostream & operator<<(std::ostream & o, const Awesome &a){o << a.get_n(); return o;}

// int main()
// {
//     Awesome a(2), b(4);
//     swap(a, b);
//     std::cout << a <<  " " << b << std::endl;
//     std::cout << max(a,b) << std::endl;
//     std::cout << min(a,b) << std::endl;
//     return (0);
// }