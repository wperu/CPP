/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 17:28:38 by wperu             #+#    #+#             */
/*   Updated: 2021/09/24 18:30:55 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <time.h>
#include <exception>

class Base {public: virtual ~Base(void) {}};
class A: public Base {};
class B: public Base {};
class C: public Base {};

Base * generate(void)
{
   int i = rand() % 3;
   switch (i)
   {
   case 0:
        return(new A());
   case 1:
        return(new B());
   case 2:
        return(new C());
   }
   return(0);
}

void identify(Base * p)
{
    if(A * identi = dynamic_cast<A *>(p))
    {
        std::cout << "A" << std::endl;
        return ;
    }

    else if(B * identi = dynamic_cast<B *>(p))
    {
        std::cout << "B" << std::endl;
        return ;
    }
    else if(C * identi = dynamic_cast<C *>(p))
    {
        std::cout << "C" << std::endl;
        return ;
    }  
}

void identify(Base & p)
{
    try
    {
        A & identi = dynamic_cast<A &> (p);
        std::cout << "A" << std::endl;
        static_cast<void> (identi);
    }
    catch(std::exception &e)
    {   
    }
    try
    {
        B & identi = dynamic_cast<B &> (p);
        std::cout << "B" << std::endl;
        static_cast<void> (identi);
    }
    catch(std::exception &e)
    {   
    }
    try
    {
        C & identi = dynamic_cast<C &> (p);
        std::cout << "C" << std::endl;
        static_cast<void> (identi);
    }
    catch(std::exception &e)
    {   
    } 
}



int main(void)
{
    srand(time(NULL));
    Base *lol = generate();
    identify(lol);
    identify(*lol);
    
    Base *truc = generate();
    identify(truc);
    identify(*truc);

    Base *bidule = generate();
    identify(bidule);
    identify(*bidule);
}