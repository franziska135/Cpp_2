/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarggra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 16:04:17 by fmarggra          #+#    #+#             */
/*   Updated: 2024/09/03 16:04:19 by fmarggra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef FIXED_H
# define FIXED_H

class   Fixed {
    private:
        int _value;
        static const int _fractional_bits = 8;
    public:
        Fixed   (void);
        Fixed   (const Fixed& otherObject);
        Fixed& operator=(const Fixed& otherObject);
        ~Fixed  ();
        int     getRawBits(void)const;
        void    setRawBits(int const raw);
};

#endif
