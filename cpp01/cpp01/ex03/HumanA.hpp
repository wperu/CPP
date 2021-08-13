/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 17:46:45 by wperu             #+#    #+#             */
/*   Updated: 2021/08/11 14:28:56 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_HUMANA
#define DEF_HUMANA

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA
{
private:
    std::string name;
    Weapon& weapon;
public:
    HumanA(std::string name, Weapon& weapon);
    void attack();
    ~HumanA();
};

#endif