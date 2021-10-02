/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 16:54:58 by wperu             #+#    #+#             */
/*   Updated: 2021/09/26 16:55:00 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "Form.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"
class Form;

class Intern
{

	public:

		Intern();
		Intern( Intern const & src );
		~Intern();
		Form* newpresidential(std::string target);
		Form* newrobotomy(std::string target);
		Form* newshruberry(std::string target);
		Form* makeForm(std::string typeform,std::string target);
		Intern &		operator=( Intern const & rhs );


};

#endif /* ********************************************************** INTERN_H */