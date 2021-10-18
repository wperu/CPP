/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 17:58:20 by wperu             #+#    #+#             */
/*   Updated: 2021/10/14 18:02:58 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#include "span.hpp"

int main()
{
    Span sp = Span(5);
    sp.addNumber(5);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    try
    {   
        sp.addNumber(178);
    }
    catch(const std::exception& e)
	{
		std::cerr << e.what();
        
    }
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    
    Span sp2 = Span(4);
    try
    {
         std::cout << sp2.shortestSpan() << std::endl;
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what();
    }
    try
    {
         std::cout << sp2.longestSpan() << std::endl;
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what();
    }
}