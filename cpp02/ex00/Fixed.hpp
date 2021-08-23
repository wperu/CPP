/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 16:11:16 by wperu             #+#    #+#             */
/*   Updated: 2021/08/16 17:42:54 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_FIXED
#define DEF_FIXED
#include <iostream>

class Fixed
{
private:
    int fix;
    static const int bits = 8;
public:
    Fixed();
    Fixed(Fixed const & test);
    Fixed & operator=( Fixed const & rhs);
    int getRawBits(void) const;
    void setRawBits(int const raw);
    ~Fixed();
};

#endif