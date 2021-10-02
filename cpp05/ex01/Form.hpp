/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 16:54:46 by wperu             #+#    #+#             */
/*   Updated: 2021/09/26 16:54:47 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{

	public:

		class GradeTooHighException: public std::exception
		{
			virtual const char* what() const throw();
		};
		class GradeTooLowException: public std::exception
		{
			virtual const char* what() const throw();
		};
		
		Form(std::string name, int sign, int exec);
		Form( Form const & src );
		int get_sign() const;
		int get_exec() const;
		std::string get_name() const;
		bool get_signed() const;
		void beSigned(const Bureaucrat & guys);
		~Form();

		Form &		operator=( Form const & rhs );

	private:
		std::string name;
		int g_sign;
		bool sign;
		int	g_exec;

};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */