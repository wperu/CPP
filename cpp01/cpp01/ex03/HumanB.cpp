/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 14:15:22 by wperu             #+#    #+#             */
/*   Updated: 2021/08/13 15:32:00 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
}

void HumanB::setWeapon(Weapon& weapo)
{
    this->weapon = &weapo;
}

void HumanB::attack()
{
    if(weapon->getType().empty())
    {
        std::cout << name << " attacks with nothing" << std::endl;
    }
    else
        std::cout << name << " attacks with his " << weapon->getType() << std::endl;
}

HumanB::~HumanB()
{

}