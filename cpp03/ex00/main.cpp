/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 16:17:11 by wperu             #+#    #+#             */
/*   Updated: 2021/08/23 17:04:52 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Claptrap.hpp"

int main(void)
{
    Claptrap clap3("michelle");
    Claptrap clap2("andré");
    Claptrap clap1(clap3);
    
    clap1.attack(clap2.get_name());
    clap1.takeDamage(6);
    clap1.beRepaired(2);
    clap2.attack(clap1.get_name());
    clap2.takeDamage(7);
    clap2.beRepaired(8);
    std::cout << clap3 << std::endl;
}