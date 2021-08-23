/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 16:17:11 by wperu             #+#    #+#             */
/*   Updated: 2021/08/23 17:03:24 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Claptrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{

  DiamondTrap D1;
  DiamondTrap D2("rihanna");
  DiamondTrap D3(D2);

  D1.beRepaired(44);
  D1.takeDamage(44);
  
  
  D1.whoAmI();
  D2.whoAmI();
  D1.attack(D2.get_name());
  D3.attack(D2.get_name());
  D1.guardGate();
  D1.highFivesGuys();

  std::cout << D1 << std::endl;
  std::cout << D2 << std::endl;
  
  return(0); 

}