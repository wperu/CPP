/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 17:53:47 by wperu             #+#    #+#             */
/*   Updated: 2021/09/14 03:50:16 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"


int main()
{
     AAnimal *animal[20];
    
    for (size_t i = 0; i < 20; i++)
    {
        if(i % 2 == 0)
            animal[i] = new Cat();
        else
            animal[i] = new Dog();
    }
    for (size_t i = 0; i < 20; i++)
        animal[i]->makeSound();
    for (size_t i = 0; i < 20; i++)
        delete animal[i];
    
    Dog rex;
    rex.set_ideas(0,"Bone!!!");
    std::cout << rex.get_ideas(0) << std::endl;
    Cat pussy;
    pussy.set_ideas(0,"Scratch!!!");
    std::cout << pussy.get_ideas(0) << std::endl;
}