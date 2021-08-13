/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 17:47:51 by wperu             #+#    #+#             */
/*   Updated: 2021/08/11 14:27:10 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_WEAPON
#define DEF_WEAPON

#include <string>
#include <iostream>

class Weapon
{
private:
    std::string type;
    
public:
    Weapon();
    Weapon(std::string type);
    void setType(std::string type);
    std::string const & getType() const;
    ~Weapon();
};

#endif