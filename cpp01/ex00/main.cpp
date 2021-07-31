/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 15:49:56 by wperu             #+#    #+#             */
/*   Updated: 2021/07/30 16:59:22 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie first("alpha");
    first.announce();
    Zombie *zombi;
    zombi = newZombie("pedro");
    zombi->announce();
    delete zombi;
    randomChump("ricko");
    return (0);    
}