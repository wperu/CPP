/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 17:58:22 by wperu             #+#    #+#             */
/*   Updated: 2021/10/14 18:02:17 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span :: Span()
{
    this->n = 0;
}

Span:: Span(unsigned int n)
{
    this->n = n;
}

unsigned int Span::shortestSpan()
{
    unsigned int shortest = INT_MAX;
    std::vector<int> stock;
    stock = this->stack;
    
    
    if(stack.size() < 2)
        throw Stackempty();
    std::sort(stock.begin(), stock.end());
    for(unsigned int i = 0; i < stock.size() ; i++)
    { 
         if(static_cast<unsigned int>(std::abs(stock[i + 1] - stock[i] )) < shortest)
            shortest = std::abs(stock[i + 1] - stock[i]);
    }
    return(shortest);
} 

unsigned int Span::longestSpan()
{
    if(stack.size() < 2)
        throw Stackempty();
    int min = static_cast<int>(*std::min_element(this->stack.begin(),this->stack.end()));
    int max = static_cast<int>(*std::max_element(this->stack.begin(),this->stack.end()));
    
    return(std::abs(max - min));
}

void Span::addNumber(int element)
{
    if(this->n == this->stack.size())
        throw Stackfull();
    stack.push_back(element);
}
