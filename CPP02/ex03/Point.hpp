#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point {
    private:
        Fixed const _x;
        Fixed const _y;
    public:
        Point();
        Point(const Fixed &x, const Fixed &y);
        Point(const Point &point);
        Point &operator=(const Point &other);
        ~Point();
        Fixed getX() const;
        Fixed getY() const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif