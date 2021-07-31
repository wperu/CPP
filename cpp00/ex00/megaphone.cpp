/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 10:34:10 by wperu             #+#    #+#             */
/*   Updated: 2021/07/26 12:09:35 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int ac, char **av)
{
    int i = 1;
    int j = 0;
    
    if(ac < 2)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        while(av[i])
        {
            j = 0;
            while(av[i][j])
            {
                if(std::islower(av[i][j]))
                    std::cout << static_cast<char>(std::toupper(av[i][j]));
                else
                    std::cout << av[i][j];
                j++;
            }
            if(av[i + 1])
                std::cout << " ";
            i++;
        }
        std::cout << std::endl;
    }
    return (0);
}