/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 17:44:53 by wperu             #+#    #+#             */
/*   Updated: 2021/10/02 18:37:54 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template< typename T >
void iter(T *list , int length, void (*p_ft) (T &))
{
    for(int i = 0; i < length; i++)
        p_ft(list[i]);
}

template< typename T>
void display(T & n)
{
        std::cout << n << std::endl;
}

