/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 18:43:58 by wperu             #+#    #+#             */
/*   Updated: 2021/10/12 17:51:36 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>
#include <iostream>

class Nofind: public std::exception
{
    virtual const char* what() const throw()
    {
        return ("No find !!!\n");
    }
};

template<typename T>
typename T::iterator easyfind(T &container, int n)
{
    typename T::iterator it;
    it = find(container.begin(),container.end(),n);
    if(it == container.end())
        throw Nofind();
    return(it);
}
