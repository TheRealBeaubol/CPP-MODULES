#include "Fixed.hpp"
#include <iostream>

int main() {
    // Constructors tests
    Fixed a;
    Fixed const b(10);
    Fixed const c(42.42f);
    Fixed const d(b);
    Fixed e;

    // Operator= test
    e = Fixed(1234.4321f);

    // Print value
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "c: " << c << std::endl;
    std::cout << "d: " << d << std::endl;
    std::cout << "e: " << e << std::endl;

    // toInt() and toFloat() tests
    std::cout << "a to int: " << a.toInt() << std::endl;
    std::cout << "c to float: " << c.toFloat() << std::endl;

    // Comparison operators tests
    std::cout << "b > a: " << (b > a) << std::endl;
    std::cout << "b < c: " << (b < c) << std::endl;
    std::cout << "b >= d: " << (b >= d) << std::endl;
    std::cout << "b <= c: " << (b <= c) << std::endl;
    std::cout << "b == d: " << (b == d) << std::endl;
    std::cout << "b != c: " << (b != c) << std::endl;

    // Arithmetic operators tests
    Fixed sum = b + c;
    Fixed diff = e - b;
    Fixed product = b * c;
    Fixed quotient = e / b;

    std::cout << "b + c: " << sum << std::endl;
    std::cout << "e - b: " << diff << std::endl;
    std::cout << "b * c: " << product << std::endl;
    std::cout << "e / b: " << quotient << std::endl;

    // Increment and decrement operators tests
    std::cout << "a before: " << a << std::endl;
    std::cout << "++a: " << ++a << std::endl;
    std::cout << "a after: " << a << std::endl;
    std::cout << "a++: " << a++ << std::endl;
    std::cout << "a after: " << a << std::endl;

    std::cout << "--a: " << --a << std::endl;
    std::cout << "a after: " << a << std::endl;
    std::cout << "a--: " << a-- << std::endl;
    std::cout << "a after: " << a << std::endl;

    // min function and max function tests
    std::cout << "min(b, c): " << Fixed::min(b, c) << std::endl;
    std::cout << "max(b, c): " << Fixed::max(b, c) << std::endl;

    return 0;
}