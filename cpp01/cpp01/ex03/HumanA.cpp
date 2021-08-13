/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 14:05:04 by wperu             #+#    #+#             */
/*   Updated: 2021/08/11 14:44:50 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapo) : weapon(weapo)
{
    this->name = name;
    this->weapon = weapo;
}

HumanA::~HumanA()
{
}

void HumanA::attack()
{
    std::cout << name << " attacks with his " << this->weapon.getType() << std::endl;
}