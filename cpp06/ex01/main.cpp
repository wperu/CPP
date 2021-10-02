/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 15:41:21 by wperu             #+#    #+#             */
/*   Updated: 2021/09/22 16:54:09 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

struct Data
{
    int age;
    std::string name;
};

uintptr_t serialize(Data* ptr)
{
    uintptr_t p;
    p = reinterpret_cast<uintptr_t>(ptr);
    return(p);
}

Data* deserialize(uintptr_t raw)
{
    Data *ptr;
    ptr = reinterpret_cast<Data *>(raw);
    return(ptr);
}

int main()
{
    Data *db = new Data();
    Data *deseria;
    uintptr_t seria;
    db->age = 24;
    db->name = "michelle";
    std::cout << "Data : " << db <<std::endl;
    std::cout << "age : " << db->age << std::endl;
    std::cout << "name : " << db->name << std::endl;
    seria = serialize(db);
    std::cout << "after serialise : " << seria << std::endl;
    deseria = deserialize(seria);
    std::cout << "after deserialize : "<< deseria << std::endl;
    std::cout << "age : " << deseria->age << std::endl;
    std::cout << "name : " << deseria->name << std::endl;
    delete db;
    return(0);
    
}