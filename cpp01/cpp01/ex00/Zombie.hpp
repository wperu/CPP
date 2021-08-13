/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 15:35:49 by wperu             #+#    #+#             */
/*   Updated: 2021/08/13 15:32:42 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Zombie
{
    private:
        std::string name;
    public:
        Zombie();
        Zombie(std::string name);
        ~Zombie();
        void    announce(void);
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);
