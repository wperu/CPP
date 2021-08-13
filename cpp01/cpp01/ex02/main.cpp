/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 17:31:39 by wperu             #+#    #+#             */
/*   Updated: 2021/07/30 17:39:45 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string message = "HI THIS IS BRAIN";
    std::string* StringPTR = &message;
    std::string& StringREF = message;

    std::cout << &message << std::endl;
    std::cout << StringPTR << std::endl;
    std::cout << &StringREF << std::endl;

    std::cout << message << std::endl;
    std::cout << *StringPTR << std::endl;
    std::cout << StringREF << std::endl;
    return(0);
}