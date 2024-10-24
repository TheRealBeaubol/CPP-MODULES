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
