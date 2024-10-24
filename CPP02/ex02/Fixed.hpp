#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed {
    private:
        int _value;
        static const int _fractionalBits = 8;
    public:
        Fixed();
        Fixed(const int value);
        Fixed(const float value);
        Fixed(const Fixed &fixed);
        Fixed &operator=(const Fixed &other);
        Fixed operator+(const Fixed &other) const;
        Fixed operator-(const Fixed &other) const;
        Fixed operator*(const Fixed &other) const;
        Fixed operator/(const Fixed &other) const;
        Fixed &operator++(void);
        Fixed operator++(int);
        Fixed &operator--(void);
        Fixed operator--(int);
        bool operator>(const Fixed &other) const;
        bool operator<(const Fixed &other) const;
        bool operator>=(const Fixed &other) const;
        bool operator<=(const Fixed &other) const;
        bool operator==(const Fixed &other) const;
        bool operator!=(const Fixed &other) const;
        static const Fixed &min(const Fixed &a, const Fixed &b);
        static const Fixed &max(const Fixed &a, const Fixed &b);
        ~Fixed();
        int getRawBits(void) const;
        void setRawBits(int const raw);
        int toInt(void) const;
        float toFloat(void) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif