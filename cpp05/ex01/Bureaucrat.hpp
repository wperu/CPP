/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 18:53:48 by wperu             #+#    #+#             */
/*   Updated: 2021/09/24 19:49:34 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include "Form.hpp"
class Form;

class Bureaucrat
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
		Bureaucrat(std::string const & name, int const grade);
		Bureaucrat( Bureaucrat const & src );
		~Bureaucrat();
		void upgrade() ;
		void downgrade() ;
		std::string getName() const;
		int	getGrade() const ;
		void signForm(Form & form);
		Bureaucrat &		operator=( Bureaucrat const & rhs );

	private:
		std::string const	name;
		int 				grade;

};

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & rhs );

#endif /* ****************************************************** BUREAUCRAT_H */