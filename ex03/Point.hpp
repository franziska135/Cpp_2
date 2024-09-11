/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarggra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 16:05:14 by fmarggra          #+#    #+#             */
/*   Updated: 2024/09/03 16:22:43 by fmarggra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

#ifndef POINT_H
# define POINT_H

class   Point {
    private:
        int _value;
        static const int _fractional_bits = 8;
    public:
        Point   (void);
        Point   (const int x);
        Point   (const float x);
        Point   (const Point& otherObject);
        int     getRawBits(void)const;
        ~Point  ();
};

#endif
