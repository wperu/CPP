/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 16:11:16 by wperu             #+#    #+#             */
/*   Updated: 2021/08/19 16:39:56 by wperu            ###   ########lyon.fr   */
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
    Fixed   operator+( Fixed const & rhs);
    Fixed   operator-( Fixed const & rhs);
    Fixed   operator*( Fixed const & rhs);
    Fixed   operator/( Fixed const & rhs);
    bool    operator<  ( Fixed const & rhs) const;
    bool    operator<= ( Fixed const & rhs) const;
    bool    operator>= ( Fixed const & rhs) const;
    bool    operator>  ( Fixed const & rhs) const;
    bool    operator== ( Fixed const & rhs)  const;
    bool    operator!= ( Fixed const & rhs) const;
    Fixed&  operator++();
    Fixed   operator++(int);
    Fixed&  operator--();
    Fixed   operator--(int);
    static Fixed&        max(Fixed  &lhs, Fixed &rhs);
    static const Fixed&  max(Fixed const &lhs, Fixed const &rhs);
    static Fixed&        min(Fixed  &lhs, Fixed &rhs);
    static const Fixed&  min(Fixed const &lhs, Fixed const &rhs);
    float toFloat(void) const;
    int toInt(void) const;
    int getRawBits(void) const;
    void setRawBits(int const raw);
    ~Fixed();
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif