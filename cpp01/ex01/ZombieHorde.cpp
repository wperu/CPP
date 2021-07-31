/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 17:13:58 by wperu             #+#    #+#             */
/*   Updated: 2021/07/30 17:30:15 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
    Zombie* zombies = new Zombie[N];
    for(int i = 0; i < N ; i++)
        zombies[i].set_name(name);
    for(int i = 0; i < N ; i++)
        zombies[i].announce();
    return zombies;
}