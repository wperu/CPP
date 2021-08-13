/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 17:05:25 by wperu             #+#    #+#             */
/*   Updated: 2021/08/13 15:16:20 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen()
{
    tab[0]="DEBUG";
    tab[1]="INFO";
    tab[2]="WARNING";
    tab[3]="ERROR";
}

Karen::~Karen()
{
}

void Karen::debug(void)
{
    std::cout << "[DEBUG]" << std::endl;
    std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Karen::info(void)
{
    std::cout << "[INFO]" << std::endl;
    std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Karen::warning(void)
{
    std::cout << "[WARNING]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void Karen::error(void)
{
    std::cout << "[ERROR]" << std::endl;
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Karen::complain(std::string level)
{
    void(Karen::*ftab[])(void) =
    {
        &Karen::debug,
        &Karen::info,
        &Karen::warning,
        &Karen::error
    };
    for(int i = 0; i < 4; i++)
    {
        if(level.compare(tab[i]) == 0)
        { 
            (this->*ftab[i])();
            return ;
        }
    }
    std::cout << "no message for this alerts" << std::endl;
    return ;
}