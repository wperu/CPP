/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 17:14:10 by wperu             #+#    #+#             */
/*   Updated: 2021/10/14 17:55:19 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include <stack>
#include <list>

int main()
{
    MutantStack<int> mstack;
    
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    std::cout << mstack.size() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    std::cout << mstack.top() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(10);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::cout << mstack << std::endl;
    std::stack<int> s(mstack);
    std::cout << "realstack.top(): "<< s.top() << std::endl;
    std::cout << "realstack.top(): "<< mstack.top() << std::endl;

    return 0;
}