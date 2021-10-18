/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 17:58:08 by wperu             #+#    #+#             */
/*   Updated: 2021/10/14 18:02:38 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>
#include <list>
#include <iostream>
#include <vector>

class Span
{
private:
    unsigned int n;
    std::vector<int> stack;
    
public:
    class Stackfull : public std::exception 
    {
      virtual const char* what() const throw()
      {
          return("Stack full!!!\n");
      }
    };
    class Stackempty : public std::exception
    {
        virtual const char* what() const throw()
        {
            return("Stack empty or single element in stack!!!\n");
        }
    };
    Span();
    Span(unsigned int n);
    Span( Span const & src);
    ~Span() {};
    unsigned int shortestSpan();
    unsigned int longestSpan();
    void addNumber(int element);
    Span & operator=( Span const & rhs);
    unsigned int get_size() const;
    std::vector<int> get_stack() const;
};

