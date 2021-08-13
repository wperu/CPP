/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 14:51:13 by wperu             #+#    #+#             */
/*   Updated: 2021/08/11 16:52:12 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char **av)
{
    std::string file1, file2, line,file_string, s1, s2, tmp_line;
    int find, last_find;
    std::ifstream file;
    std::ofstream file_replace;
    last_find = 0;
    if(ac == 4)
    {   
        file1 = av[1];
        file2 = file1 + ".replace";
        s1 = av[2];
        s2 = av[3];
        file.open(file1);
        while(file.is_open())
        {
            while(std::getline(file,line))
            {
                while((find = line.find(s1,last_find)) != -1)
                {
                    tmp_line = line.substr(0,find);
                    line = tmp_line + s2 + line.substr(find + s1.length(), line.length());
                    last_find = find + s2.length();
                }
                file_string = file_string + line + "\n";
            }
            file.close();
            file_replace.open(file2);
            file_replace << file_string << std::endl;
            file_replace.close();
        }
    }
    return(0);
}