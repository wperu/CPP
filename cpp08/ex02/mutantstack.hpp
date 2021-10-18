/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 17:15:33 by wperu             #+#    #+#             */
/*   Updated: 2021/10/14 18:00:37 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <deque>

template <typename T>
class MutantStack : public std::deque<T>
{

    public:
        MutantStack() {};
        ~MutantStack() {};

    void push(const T& value) {  std::deque<T>::push_back(value); }
    void pop() {  std::deque<T>::pop_back(); }
    T const& top() { return std::deque<T>::back(); }
    
};

template <typename T>
std::ostream& operator<<(std::ostream& o, MutantStack<T> const& src)
{
    o << "MutantStack (" << src.size() << ')';
    return o;
}