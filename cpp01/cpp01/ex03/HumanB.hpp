/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 17:47:16 by wperu             #+#    #+#             */
/*   Updated: 2021/08/11 14:28:54 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_HUMANB
#define DEF_HUMANB

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{
private:
    std::string name;
    Weapon * weapon;
public:
    HumanB(std::string name);
    void setWeapon(Weapon& weapo);
    void attack();
    ~HumanB();
};


#endif