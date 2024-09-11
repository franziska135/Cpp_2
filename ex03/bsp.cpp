/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarggra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 16:22:06 by fmarggra          #+#    #+#             */
/*   Updated: 2024/09/03 16:22:07 by fmarggra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

std::ostream&  operator<<(std::ostream& os, const Point& otherObject) {
    os << otherObject.getRawBits();
    return (os);
}
