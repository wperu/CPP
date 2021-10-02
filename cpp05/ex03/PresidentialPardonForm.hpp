/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 14:40:58 by wperu             #+#    #+#             */
/*   Updated: 2021/09/21 18:41:57 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class PresidentialPardonForm : public Form
{

	public:

		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm( PresidentialPardonForm const & src );
		~PresidentialPardonForm();
		void execute (Bureaucrat const & executor) const;
		void set_target(std::string target);
		std::string get_target() const;
		PresidentialPardonForm &		operator=( PresidentialPardonForm const & rhs );

	private:
		std::string target;

};

std::ostream &			operator<<( std::ostream & o, PresidentialPardonForm const & rhs );

#endif /* ****************************************** PRESIDENTIALPARDONFORM_H */