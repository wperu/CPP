/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 16:17:11 by wperu             #+#    #+#             */
/*   Updated: 2021/08/23 17:04:04 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Claptrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap Scav1;
    ScavTrap Scav3("berger");
    ScavTrap Scav2("poulin");
    Scav1=Scav3;
    Scav1.attack(Scav2.get_name());
    Scav1.takeDamage(4);
    Scav1.beRepaired(6);
    Scav1.guardGate();
    std::cout << Scav1 << std::endl;
}