/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarggra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 16:04:10 by fmarggra          #+#    #+#             */
/*   Updated: 2024/09/03 16:04:12 by fmarggra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//default constructor
Fixed::Fixed(void) {
    _value = 0;
    std::cout   << "Default constructor called"
                << std::endl;
}

//copy constructor 'copy' key
Fixed::Fixed(const Fixed& otherObject) {
    std::cout   << "Copy constructor called"
                << std::endl;
    _value = otherObject.getRawBits();
}

//copy assignment constructor = keyword
Fixed& Fixed::operator=(const Fixed& otherObject) {
    std::cout   << "Copy assignment operator called"
                << std::endl;
    if (this != &otherObject) {
        _value = otherObject.getRawBits();
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
