/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 14:23:12 by wperu             #+#    #+#             */
/*   Updated: 2021/08/11 14:43:20 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
}

Weapon::Weapon(std::string type)
{
    this->type = type;
}

Weapon::~Weapon()
{

}

void    Weapon::setType(std::string type)
{
    this->type = type;
}

std::string const & Weapon::getType() const
{
    return  this->type;
}