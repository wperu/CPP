/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 18:53:40 by wperu             #+#    #+#             */
/*   Updated: 2021/09/24 20:04:53 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <stdlib.h>

int main()
{
    ShrubberyCreationForm form = ShrubberyCreationForm("Arbre");
    RobotomyRequestForm form2 = RobotomyRequestForm("Robotomise moi ca");
    PresidentialPardonForm form3 = PresidentialPardonForm("The pardon");
    Bureaucrat homme = Bureaucrat("Pompidou", 120);
    Bureaucrat homme2 = Bureaucrat("Pompon", 80);
    Bureaucrat homme3 = Bureaucrat("Chef", 1);

    try
    {
        form.execute(homme);
    }
    catch (const std::exception& e)
    {
         std::cerr << e.what() << std::endl;
    }

    try
    {
        form2.execute(homme2);
    }
    catch (const std::exception& e)
    {
         std::cerr << e.what() << std::endl;
    }

    try
    {
        form3.beSigned(homme3);
        homme3.executeForm(form3);
    }
      catch (const std::exception& e)
    {
         std::cerr << e.what() << std::endl;
    }


    form.beSigned(homme3);
    form2.beSigned(homme3);
    form3.beSigned(homme3);

    homme.executeForm(form);
    homme2.executeForm(form2);
    homme3.executeForm(form3);
    homme3.executeForm(form2);
    std::cout << form3 << std::endl;
}