/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 17:10:56 by wperu             #+#    #+#             */
/*   Updated: 2021/10/02 17:25:40 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <string>

template< typename T >

T  const max( T const &x, T const &y )
{
    return( (x>y) ? x : y );
}
template< typename T >
T  const min( T const &x, T const &y )
{
    return( (x<y) ? x : y );
}
template< typename T >
void   swap(T  &x, T  &y)
{
     T tmp;
     tmp = x;
     x = y;
     y = tmp;
}