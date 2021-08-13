/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 16:56:15 by wperu             #+#    #+#             */
/*   Updated: 2021/08/13 15:24:28 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int ac, char **av)
{
    Karen test;
    int i;
    if(ac != 2)
    {
        std:: cout << "1 argument pls" << std::endl;
        return (0); 
    }
    std::string level(av[1]);
    for(i = 0; i < 4 ; i++)
    {
        if(level.compare(test.tab[i]) == 0)
            break;
    }
    switch (i)
    {
        case 0:
            test.complain("DEBUG");
        case 1:
            test.complain("INFO");
        case 2:
            test.complain("WARNING");
        case 3:
            test.complain("ERROR");
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]"<< std::endl;
    }
    return(0);
}