/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 14:23:57 by wperu             #+#    #+#             */
/*   Updated: 2021/07/31 15:21:26 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "contact.hpp"

Contact::Contact(void)
{
	
}

Contact::Contact(std::string  f_name,std::string  l_name,
         std::string  nickname, std::string  phone_nb,std::string  dark_secret)
{
	this->f_name = f_name;
	this->l_name = l_name;
	this->nickname = nickname;
	this->phone_nb = phone_nb;
	this->dark_secret = dark_secret;

}

std::string		Contact::get_f_name(void)
{
	return f_name;
}

std::string		Contact::get_l_name(void)
{
	return l_name;
}

std::string		Contact::get_nickname(void)
{
	return nickname;
}

std::string     Contact::get_phone_nb(void)
{
	return phone_nb;
}

std::string		Contact::get_dark_secret(void)
{
	return dark_secret;
}

Contact			Contact::add_contact()
{
	std::cout << "entrer le first name"<< std::endl;
	std::cin >> f_name;
	std::cin.clear();
	std::cin.ignore(1000,'\n');
	std::cout << "entrer le last name" << std::endl;
	std::cin >> l_name;
	std::cin.clear();
	std::cin.ignore(1000,'\n');
	std::cout << "entrer le nickname" << std::endl;
	std::cin >> nickname;
	std::cin.clear();
	std::cin.ignore(1000,'\n');
	std::cout << "entrer le phone number" << std::endl;
	std::cin >> phone_nb;
	std::cin.clear();
	std::cin.ignore(1000,'\n');
	std::cout << "entrer le darkest secret" << std::endl;
	std::cin >> dark_secret;
	
	Contact add = Contact(f_name,l_name,nickname,phone_nb,dark_secret);
	return add;
}

void			Contact::display_contact(void)
{
	std::cout << "first name      : " + f_name << std::endl;
	std::cout << "last name       : " + l_name << std::endl;
	std::cout << "nickname        : " + nickname << std::endl;
	std::cout << "phone number    : " + phone_nb << std::endl;
	std::cout << "darkest secret  : " + dark_secret << std::endl;
}

void			Contact::display_info(std::string info)
{
	std::string disp;
	int	size;
	int	i;
	i = 0;
	disp = info;
	size = disp.length();
	if(size > 10)
	{
		disp.resize(9);
		std::cout << disp + ".|";
	}
	else
	{
		while(i < (10 - size))
		{
			std::cout << ' ';
			i++;
		}
		std::cout << disp + '|';
	}
}

void			Contact::search_contact(Contact guys, int i)
{
	std::cout << "|         "<< i << '|';
	display_info(guys.get_f_name());
	display_info(guys.get_l_name());
	display_info(guys.get_nickname());
	std::cout << std::endl;
}

Contact::~Contact(void)
{
	
}