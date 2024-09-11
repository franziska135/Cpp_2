/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarggra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 16:22:21 by fmarggra          #+#    #+#             */
/*   Updated: 2024/09/03 16:22:22 by fmarggra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

#ifndef FIXED_H
# define FIXED_H

class   Fixed {
    private:
        int _value;
        static const int _fractional_bits = 8;
    public:
        Fixed   (void);
        Fixed   (const int x);
        Fixed   (const float x);
        Fixed   (const Fixed& otherObject);
        ~Fixed  ();

        Fixed& operator=(const Fixed& otherObject);
        int     getRawBits(void)const;
        void    setRawBits(int const raw);
        float   toFloat(void)const;
        int     toInt(void)const;

        bool    operator>(const Fixed& otherObject);
        bool    operator<(const Fixed& otherObject);
        bool    operator>=(const Fixed& otherObject);
        bool    operator<=(const Fixed& otherObject);
        bool    operator==(const Fixed& otherObject);
        bool    operator!=(const Fixed& otherObject);
        Fixed&  operator-(const Fixed& otherObject);
        Fixed&  operator+(const Fixed& otherObject);
        Fixed   operator*(const Fixed& otherObject);
        Fixed   operator/(const Fixed& otherObject);
        Fixed   operator++(int);
        Fixed   operator--(int);
        Fixed&  operator++(void);
        Fixed&  operator--(void);

        static const Fixed& min(const Fixed& object, const Fixed& otherObject);
        static Fixed&  min(Fixed& object, Fixed& otherObject);
        static const Fixed& max(const Fixed& object, const Fixed& otherObject);
        static Fixed&  max(Fixed& object, Fixed& otherObject);

};

std::ostream&  operator<<(std::ostream& os, const Fixed& otherObject);

#endif
