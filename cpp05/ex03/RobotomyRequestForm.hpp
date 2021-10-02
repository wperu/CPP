/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 14:41:05 by wperu             #+#    #+#             */
/*   Updated: 2021/09/21 19:01:28 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class RobotomyRequestForm : public Form
{

	public:

		RobotomyRequestForm();
		RobotomyRequestForm( RobotomyRequestForm const & src );
		RobotomyRequestForm(std::string target);
		~RobotomyRequestForm();
		void execute(Bureaucrat const & executor) const;
		void set_target(std::string target);
		std::string get_target() const;
		RobotomyRequestForm &		operator=( RobotomyRequestForm const & rhs );

	private:
		std::string target;

};

std::ostream &			operator<<( std::ostream & o, RobotomyRequestForm const & rhs );

#endif /* ********************************************* ROBOTOMYREQUESTFORM_H */