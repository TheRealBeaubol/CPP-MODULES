#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>

int main() {
    Point a(Fixed(0), Fixed(0));
    Point b(Fixed(10), Fixed(0));
    Point c(Fixed(0), Fixed(10));

    Point point_inside(Fixed(2), Fixed(2));
    std::cout << "Point inside: " << (bsp(a, b, c, point_inside) ? "True" : "False") << std::endl;

    Point point_outside(Fixed(10), Fixed(10));
    std::cout << "Point outside: " << (bsp(a, b, c, point_outside) ? "True" : "False") << std::endl;

    Point point_on_vertex(Fixed(0), Fixed(0));
    std::cout << "Point on vertex: " << (bsp(a, b, c, point_on_vertex) ? "True" : "False") << std::endl;

    Point point_on_edge(Fixed(5), Fixed(0));
    std::cout << "Point on edge: " << (bsp(a, b, c, point_on_edge) ? "True" : "False") << std::endl;

    return 0;
}