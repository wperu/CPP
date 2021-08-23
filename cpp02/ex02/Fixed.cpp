/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 17:39:29 by wperu             #+#    #+#             */
/*   Updated: 2021/08/19 16:35:30 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->fix = 0;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const & test)
{
    std::cout << "copy constructor called" <<std::endl;
    *this = test;
}

Fixed::Fixed(const int x)
{
    std::cout << "Int constructor called" << std::endl;
    this->fix = x << bits;
}

Fixed::Fixed(const float y)
{
    std::cout << "Float constructor called" << std::endl;
    this->fix = (int)(roundf(y * (1 << bits)));
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
    std::cout << "Assignation operator called" << std::endl;
    if(this != &rhs)
        this->fix = rhs.getRawBits();
    return *this;
}

void Fixed::setRawBits(int const raw)
{
    this->fix = raw;

}

int Fixed::getRawBits(void) const
{
    return(this->fix);
}

int Fixed::toInt(void)const
{ 
    return(fix >> bits);
}

float Fixed::toFloat(void)const
{
    return((float)(fix/roundf((1 << bits))));
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs)
{
    o << rhs.toFloat();
    return o;
}

Fixed Fixed::operator+( Fixed const & rhs)
{
    return Fixed( this->fix + rhs.getRawBits());
}

Fixed Fixed::operator-( Fixed const & rhs)
{
    return Fixed( this->fix - rhs.getRawBits());
}

Fixed Fixed::operator*( Fixed const & rhs)
{
    return Fixed( this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/( Fixed const & rhs)
{
    return Fixed( this->toFloat() / rhs.toFloat());
}

bool Fixed::operator< ( Fixed const & rhs)  const
{
    return ( this->fix < rhs.getRawBits());
}

bool Fixed::operator<=( Fixed const & rhs)  const
{
    return (this->fix <= rhs.getRawBits());
}

bool Fixed::operator>=( Fixed const & rhs) const
{
    return (this->fix >= rhs.getRawBits());
}

bool Fixed::operator>( Fixed const & rhs) const
{
    return (this->fix > rhs.getRawBits());
}

bool Fixed::operator==( Fixed const & rhs) const
{
  return (this->fix == rhs.getRawBits()); 
}

bool Fixed::operator!=( Fixed const & rhs) const
{
    return (this->fix != rhs.fix); 
}

Fixed& Fixed::operator++()
{
    this->fix++;
    return(*this);
}

Fixed Fixed::operator++(int)
{
    Fixed temp = *this;
    ++*this;
    return temp;
}

Fixed& Fixed::operator--()
{
    this->fix--;
    return(*this);
}

Fixed Fixed::operator--(int)
{
    Fixed temp = *this;
    --*this;
    return temp;
}

const Fixed& Fixed::min(Fixed const & lhs, Fixed const & rhs)
{
    if(lhs < rhs)
        return(lhs);
    return(rhs);
}

Fixed& Fixed::min(Fixed & lhs, Fixed & rhs)
{
    if(lhs < rhs)
        return(lhs);
    return(rhs);
}

const Fixed&  Fixed::max(Fixed const  & lhs, Fixed const & rhs)
{
    if(lhs > rhs)
        return(lhs);
    return(rhs);
}

Fixed& Fixed::max(Fixed  & lhs, Fixed  &rhs)
 {
    if(lhs > rhs)
        return (lhs);    
    return(rhs);
 }