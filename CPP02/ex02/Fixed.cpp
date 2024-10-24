#include "Fixed.hpp"

Fixed::Fixed() : _value(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value) {
    std::cout << "Int constructor called" << std::endl;
    _value = value << _fractionalBits;
}

Fixed::Fixed(const float value) {
    std::cout << "Float constructor called" << std::endl;
    _value = roundf(value * (1 << _fractionalBits));
}

int Fixed::toInt(void) const {
    return _value >> _fractionalBits;
}

float Fixed::toFloat(void) const {
    return (float)_value / (1 << _fractionalBits);
}

Fixed::Fixed(const Fixed &fixed) {
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

Fixed &Fixed::operator=(const Fixed &other) {
    std::cout << "Copy assignation operator called" << std::endl;
    if (this != &other) {
        this->_value = other.getRawBits();
    }
    return *this;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
    return _value;
}

void Fixed::setRawBits(int const raw) {
    _value = raw;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed) {
    return out << fixed.toFloat();
}

bool Fixed::operator>(const Fixed &other) const {
    return _value > other.getRawBits();
}

bool Fixed::operator>=(const Fixed &other) const {
    return _value >= other.getRawBits();
}

bool Fixed::operator<(const Fixed &other) const {
    return _value < other.getRawBits();
}

bool Fixed::operator<=(const Fixed &other) const {
    return _value <= other.getRawBits();
}

bool Fixed::operator==(const Fixed &other) const {
    return _value == other.getRawBits();
}

bool Fixed::operator!=(const Fixed &other) const {
    return _value != other.getRawBits();
}

Fixed Fixed::operator+(const Fixed &other) const {
    Fixed result;
    result.setRawBits(_value + other.getRawBits());
    return result;
}

Fixed Fixed::operator-(const Fixed &other) const {
    Fixed result;
    result.setRawBits(_value - other.getRawBits());
    return result;
}

Fixed Fixed::operator*(const Fixed &other) const {
    Fixed result;
    result.setRawBits((_value * other.getRawBits()) >> _fractionalBits);
    return result;
}

Fixed Fixed::operator/(const Fixed &other) const {
    Fixed result;
    result.setRawBits((_value << _fractionalBits) / other.getRawBits());
    return result;
}

Fixed &Fixed::operator++(void) {
    _value++;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed tmp = *this;
    this->_value++;
    return tmp;
}

Fixed &Fixed::operator--(void) {
    _value--;
    return *this;
}

Fixed Fixed::operator--(int) {
    Fixed tmp = *this;
    this->_value--;
    return tmp;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b) {
    return (a < b) ? a : b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b) {
    return (a > b) ? a : b;
}