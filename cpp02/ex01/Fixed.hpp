/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 16:11:16 by wperu             #+#    #+#             */
/*   Updated: 2021/08/17 19:24:17 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_FIXED
#define DEF_FIXED
#include <iostream>
#include <cmath>
#include <fstream>

class Fixed
{
private:
    int fix;
    static const int bits = 8;
public:
    Fixed();
    Fixed(const int x);
    Fixed(const float y);
    Fixed(Fixed const & test);
    Fixed & operator=( Fixed const & rhs);
    float toFloat(void) const;
    int toInt(void) const;
    int getRawBits(void) const;
    void setRawBits(int const raw);
    ~Fixed();
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif