/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 18:53:40 by wperu             #+#    #+#             */
/*   Updated: 2021/09/24 19:36:04 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat a("michelle",1);
    Bureaucrat b("leo", 149);
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    
    try
    {
        a.upgrade();
    }
    catch (const std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        b.downgrade();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        Bureaucrat c("rien a garder", 151);
        std::cout << c << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        Bureaucrat d("point faible, trop fort", 0);
        std::cout << d << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return(0);  
}