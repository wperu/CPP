/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 16:57:03 by wperu             #+#    #+#             */
/*   Updated: 2021/08/13 15:16:21 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Karen
{
private:
    typedef void (Karen::*fptr)(void);
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
    
public:
    Karen();
    void complain(std::string level);
    ~Karen();
    std::string tab[4];
};
