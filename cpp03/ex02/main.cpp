/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 16:17:11 by wperu             #+#    #+#             */
/*   Updated: 2021/08/23 17:03:49 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Claptrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{

    FragTrap Frag1;
    FragTrap Frag2("Bébou");
    FragTrap Frag3("Bolosse");
    Frag1 = Frag2;
    Frag1.attack(Frag3.get_name());
    Frag1.takeDamage(9);
    Frag1.beRepaired(3);
    Frag1.highFivesGuys();
    std::cout << Frag1 << std::endl;


}