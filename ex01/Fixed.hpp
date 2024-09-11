/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarggra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 16:04:47 by fmarggra          #+#    #+#             */
/*   Updated: 2024/09/03 16:04:48 by fmarggra         ###   ########.fr       */
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

};

std::ostream&  operator<<(std::ostream& os, const Fixed& otherObject);

#endif
