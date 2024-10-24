#include "Point.hpp"

Fixed Point::getX() const {
    return this->_x;
}

Fixed Point::getY() const {
    return this->_y;
}

Point::Point() : _x(0), _y(0) {
}

Point::Point(const Fixed &x, const Fixed &y) : _x(x), _y(y) {
}

Point::Point(const Point &point) : _x(point.getX()), _y(point.getY()) {
}

Point &Point::operator=(const Point &other) {
    (void)other;
    return *this;
}

Point::~Point() {
}