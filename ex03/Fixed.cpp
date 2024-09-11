/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarggra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 16:22:15 by fmarggra          #+#    #+#             */
/*   Updated: 2024/09/03 16:22:17 by fmarggra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//default constructor
Fixed::Fixed(void) {
    _value = 0;
    // std::cout   << "Default constructor called"
    //             << std::endl;
}

/*int constructor converting it to the corresponding
fixed-point value*/
Fixed::Fixed(const int x) {
    // std::cout   << "Int constructor called"
    //             << std::endl;
    _value = x << _fractional_bits;
}

/*float constructor converting it to the corresponding
fixed point value*/
Fixed::Fixed   (const float x) {
    // std::cout   << "Float constructor called"
    //             << std::endl;
    _value = roundf(x * (1 << _fractional_bits));
}

//copy constructor 'copy' key
Fixed::Fixed(const Fixed& otherObject) {
    // std::cout   << "Copy constructor called"
    //             << std::endl;
    *this = otherObject; 
}

//copy assignment constructor '=' keyword
Fixed& Fixed::operator=(const Fixed& otherObject) {
    // std::cout   << "Copy assignment operator called"
    //             << std::endl;
    if (this != &otherObject) {
        _value = otherObject._value;
    }
    return *this;
}

Fixed::~Fixed  () {
    // std::cout   << "Destructor called"
    //             << std::endl;
}

int     Fixed::getRawBits(void)const {
    // std::cout   << "getRawBits member function called"
    //             << std::endl;
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

/*OPERATORS*/
Fixed&  Fixed::operator+(const Fixed& otherObject) {
    this->_value += otherObject.getRawBits();
    return (*this);
}

Fixed&  Fixed::operator-(const Fixed& otherObject) {
    this->_value -= otherObject.getRawBits();
    return (*this);
}

bool    Fixed::operator>=(const Fixed& otherObject) {
    if (this->_value >= otherObject.getRawBits())
        return (true);
    else
        return (false);
}

bool    Fixed::operator<=(const Fixed& otherObject) {
    if (this->_value <= otherObject.getRawBits())
        return (true);
    else
        return (false);
}

bool    Fixed::operator==(const Fixed& otherObject) {
    if (this->_value == otherObject.getRawBits())
        return (true);
    else
        return (false);
}

bool    Fixed::operator!=(const Fixed& otherObject) {
    if (this->_value != otherObject.getRawBits())
        return (true);
    else
        return (false);
}


Fixed  Fixed::operator*(const Fixed& otherObject) {
    long long result = this->_value * otherObject.getRawBits();
    this->_value = result >> this->_fractional_bits;
    return (*this);
}


Fixed  Fixed::operator/(const Fixed& otherObject) {
    long long result = this->_value << _fractional_bits;
    this->_value = result / otherObject.getRawBits();
    return (*this);
}

//increment but return original value --> postincrement
Fixed   Fixed::operator++(int) {
    Fixed   temp;
    temp = *this;
    this->_value += 1;
    return temp;
}

Fixed   Fixed::operator--(int) {
    Fixed   temp;
    temp = *this;
    this->_value -= 1;
    return temp;
}

Fixed&  Fixed::operator++(void) {
    this->_value++;
    return (*this);
}

Fixed&  Fixed::operator--(void) {
    this->_value--;
    return (*this);
}

const Fixed&  Fixed::min(const Fixed& object, const Fixed& otherObject) {
    if (object.getRawBits() <= otherObject.getRawBits())
        return object;
    else
        return otherObject;
}

const Fixed&  Fixed::max(const Fixed& object, const Fixed& otherObject) {
    if (object.getRawBits() >= otherObject.getRawBits())
        return object;
    else
        return otherObject;
}

Fixed& Fixed::max(Fixed& object, Fixed& otherObject) {
    if (object.getRawBits() >= otherObject.getRawBits())
        return object;
    else
        return otherObject;
}

Fixed&  Fixed::min(Fixed& object, Fixed& otherObject) {
    if (object.getRawBits() <= otherObject.getRawBits())
        return object;
    else
        return otherObject;
}
