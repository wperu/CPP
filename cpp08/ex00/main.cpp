/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 17:35:50 by wperu             #+#    #+#             */
/*   Updated: 2021/10/12 17:53:25 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <list>
#include <set>
#include <vector>

int  main()
{

    std::cout << "TEST LIST" << '\n';
    
    std::list< int> lst;
    lst.push_back(10);
    lst.push_back(42);
    lst.push_back(4);
    lst.push_back(24);

    
    
    
    
    try
	{
		std::cout << "Search: " << 4 << '\n';
		easyfind(lst, 4);
		std::cout << "Success!" << '\n' << "-----------------" << '\n';
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		std::cout << "Failure!" << '\n' << "-----------------" << '\n';
	}

    try
	{
		std::cout << "Search: " << 78 << '\n';
		easyfind(lst, 78);
		std::cout << "Success!" << '\n' << "-----------------" << '\n';
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		std::cout << "Failure!" << '\n' << "-----------------" << '\n';
	}

    std::cout << "TEST VECTOR" << '\n';

    std::vector<int> vex;
    vex.push_back(42);
    vex.push_back(10);
    vex.push_back(4);
    vex.push_back(24);
    
    try
	{
		std::cout << "Search: " << 24 << '\n';
		easyfind(vex, 24);
		std::cout << "Success!" << '\n' << "-----------------" << '\n';
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		std::cout << "Failure!" << '\n' << "-----------------" << '\n';
	}

    try
	{
		std::cout << "Search: " << 0 << '\n';
		easyfind(vex, 0);
		std::cout << "Success!" << '\n' << "-----------------" << '\n';
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		std::cout << "Failure!" << '\n' << "-----------------" << '\n';
	}

    std::cout << "TEST SET" << '\n';

    std::set<int> lol;
    lol.insert(42);
    lol.insert(10);
    lol.insert(4);
    lol.insert(24);
	lol.insert(24);
    
    try
	{
		std::cout << "Search: " << 42 << '\n';
		easyfind(lol, 42);
		std::cout << "Success!" << '\n' << "-----------------" << '\n';
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		std::cout << "Failure!" << '\n' << "-----------------" << '\n';
	}

    try
	{
		std::cout << "Search: " << 0 << '\n';
		easyfind(lol, 0);
		std::cout << "Success!" << '\n' << "-----------------" << '\n';
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		std::cout << "Failure!" << '\n' << "-----------------" << '\n';
	}


    
    return(0);

    
  
}