/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 14:08:20 by wperu             #+#    #+#             */
/*   Updated: 2021/07/30 15:19:11 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>

class Contact {


	private:
		std::string  f_name;
		std::string  l_name;
		std::string  nickname;
		std::string  phone_nb;
		std::string  dark_secret;
		void	display_info(std::string info);

	public:
		Contact(void);
		Contact(std::string  f_name,std::string  l_name,
		 std::string  nickname, std::string  phone_nb,std::string  dark_secret);
		std::string  get_f_name(void);
		std::string  get_l_name(void);
		std::string  get_nickname(void);
		std::string  get_phone_nb(void);
		std::string  get_dark_secret(void);
		void    display_contact(void);
		void    search_contact(Contact guys, int i);
		Contact   add_contact(void);
		~Contact(void);
};


#endif