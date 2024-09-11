/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarggra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 16:22:36 by fmarggra          #+#    #+#             */
/*   Updated: 2024/09/03 16:22:37 by fmarggra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

//default constructor
Point::Point(void) {
    _value = 0;
    // std::cout   << "Default constructor called"
    //             << std::endl;
}

/*int constructor converting it to the corresponding
fixed-point value*/
Point::Point(const int x) {
    // std::cout   << "Int constructor called"
    //             << std::endl;
    _value = x << _fractional_bits;
}

int     Point::getRawBits(void) const {
    // std::cout   << "getRawBits member function called"
    //             << std::endl;
    return (_value);
}

/*float constructor converting it to the corresponding
fixed point value*/
Point::Point   (const float x) {
    // std::cout   << "Float constructor called"
    //             << std::endl;
    _value = roundf(x * (1 << _fractional_bits));
}

//copy constructor 'copy' key
Point::Point(const Point& otherObject) {
    // std::cout   << "Copy constructor called"
    //             << std::endl;
    *this = otherObject; 
}
