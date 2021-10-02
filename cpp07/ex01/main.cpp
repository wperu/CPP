/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 18:28:40 by wperu             #+#    #+#             */
/*   Updated: 2021/10/02 20:50:25 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(int ac, char **av)
{
    iter(av, ac, &display);
     std::cout << std::endl;
    int		inttab[] = 
    {
		0, 24, 456
	};
    std::cout << "--------INT TAB----------" << std::endl;
	iter(inttab, 3, &display);
    std::cout << std::endl;

    float		floattab[] = 
    {
		1.45, 42.42, 666.69
	};
    std::cout << "--------FLOAT TAB----------" << std::endl;
	iter(floattab, 3, &display);
    std::cout << std::endl;

    std::cout << "--------STRING----------" << std::endl;
    std::string str = "Run";
    iter(&str, 1, &display);
    std::cout << std::endl;

    std::cout << "-------STRING TAB-------" << std::endl;
    std::string		strtab[] = 
    {
		"top", "mid", "bot"
	};
    iter(strtab, 3, &display);
}