/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarggra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 16:04:40 by fmarggra          #+#    #+#             */
/*   Updated: 2024/09/03 16:04:41 by fmarggra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//default constructor
Fixed::Fixed(void) {
    _value = 0;
    std::cout   << "Default constructor called"
                << std::endl;
}

/*int constructor converting it to the corresponding
fixed-point value*/
Fixed::Fixed(const int x) {
    std::cout   << "Int constructor called"
                << std::endl;
    _value = x << _fractional_bits;
}

/*float constructor converting it to the corresponding
fixed point value*/
Fixed::Fixed   (const float x) {
    std::cout   << "Float constructor called"
                << std::endl;
    _value = roundf(x * (1 << _fractional_bits));
}

//copy constructor 'copy' key
Fixed::Fixed(const Fixed& otherObject) {
    std::cout   << "Copy constructor called"
                << std::endl;
    *this = otherObject; 
}

//copy assignment constructor '=' keyword
Fixed& Fixed::operator=(const Fixed& otherObject) {
    std::cout   << "Copy assignment operator called"
                << std::endl;
    if (this != &otherObject) {
        _value = otherObject._value;
    }
    return *this;
}

Fixed::~Fixed  () {
    std::cout   << "Destructor called"
                << std::endl;
}

int     Fixed::getRawBits(void)const {
    std::cout   << "getRawBits member function called"
                << std::endl;
    return (_value);
}

void    Fixed::setRawBits(int const raw) {
    _value = raw;
}

/*converts fixed point to float*/
float   Fixed::toFloat(void)const {
    float   result = (float)_value / (1 << _fractional_bits);
    return (result);
}

/*converts fixed point to integer*/
int     Fixed::toInt(void)const {
    int result = _value >> _fractional_bits;
    return (result);
}

std::ostream&  operator<<(std::ostream& os, const Fixed& otherObject) {
    os << otherObject.toFloat();
    return (os);
}
