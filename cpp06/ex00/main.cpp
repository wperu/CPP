/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 14:13:25 by wperu             #+#    #+#             */
/*   Updated: 2021/09/22 15:39:22 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <limits>
#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>
#include <cctype>
#include <cstring>
#include <cmath>

int main(int ac, char **av)
{
    if (ac != 2)
    {
     std::cout << "1 argument of type number" << std::endl;
     return(0);
    }
    std::string value;
    double d_value;
    float f_value;
    std::stringstream ss;
    
    value = av[1];
    if(value.length() == 1 && !std::isdigit(value[0]))
        d_value = static_cast<double>(value[0]); 
    else
        d_value = atof(av[1]);
    
    if(std::isnan(d_value) || std::isinf(d_value) || d_value < 0 || d_value > 127)
        std::cout << "char: impossible" << std::endl;
    else if(d_value > 31 && d_value < 127)
        std::cout << "char: "<< static_cast<char>(d_value) << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
    
    if(std::isnan(d_value) || std::isinf(d_value) || d_value > std::numeric_limits<int>::max() || d_value < std::numeric_limits<int>::min())
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(d_value) << std::endl;
    
    f_value = static_cast<float>(d_value);
    ss << "float: " << f_value;
    value = ss.str();
    if(!((std::isnan(f_value) || std::isinf(f_value)) && value.find('.') == std::string::npos))
        ss << ".0";
    ss << "f";
    std::cout << ss.str() << std::endl;
    ss.str(std::string());
    ss.clear();

    ss<< "double: " << d_value;
    value = ss.str();
    if(!((std::isnan(d_value) || std::isinf(f_value)) && value.find('.') == std::string::npos))
        ss << ".0";
    std::cout <<ss.str()<<std::endl;
    ss.str(std::string());
    ss.clear();
    return(0); 
}