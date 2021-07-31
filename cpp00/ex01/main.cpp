/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 14:43:11 by wperu             #+#    #+#             */
/*   Updated: 2021/07/31 15:08:20 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

int main(void)
{
    Contact     contacts[8];
    std::string cmd;
    char        num;
    int         nb_contact;
    int         i;

    nb_contact = 0;
    i = 0;
    while(cmd.compare("EXIT"))
    {
        std::cout << "entrer une cmd " << std::endl;
        if(!(std::cin >> cmd))
            break;
        if(cmd.compare("SEARCH") == 0)
        {
            if(nb_contact == 0)
                std::cout << "vous n'avez pas de contact sauvegarder" << std::endl;
            else
            {
                while(i < nb_contact)
                {
                    contacts[i].search_contact(contacts[i], i);
                    i++;
                }
                std::cout << "quelle contact chercher-vous ?" << std::endl;
                std::cin >> num;
                i = 0;
                if(isdigit(num))
                {   
                    i = int(num) - 48;
                    if(i < nb_contact)
                        contacts[i].display_contact();
                    else
                        std::cout << "l\' index recherché et inexistant" << std::endl;
                    i = 0;
                }
            }
        }
        else if (cmd.compare("ADD") == 0)
        {
            if(nb_contact == 8)
                std::cout << "nombre maximum de contact" << std::endl;
            else
            { 
                contacts[nb_contact] = contacts[nb_contact].add_contact();
                nb_contact++;
            }
        }
        std::cin.clear();
        std::cin.ignore(1000,'\n');
    }
    return (0);
}