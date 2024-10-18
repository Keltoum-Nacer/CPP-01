/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knacer <knacer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 15:40:43 by knacer            #+#    #+#             */
/*   Updated: 2024/10/14 14:42:57 by knacer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<fstream>
#include<string>

std::string ft_replace(std::string &content, std::string &s1, std::string &s2)
{
    std::string new_content;
    size_t pos = 0;
    size_t first_occur;
    
    if (s1.empty())
        return (content);
    while ((first_occur = content.find(s1, pos)) != std::string::npos)
    {
        new_content.append(content.substr(pos, first_occur - pos));
        new_content.append(s2);
        pos = first_occur + s1.length();
    }
    new_content.append(content.substr(pos));
    return (new_content);
}

int main(int ac, char **av)
{
   if (ac == 4)
   {
        std::string file_name = av[1];
        std::string s1 = av[2];
        std::string s2 = av[3];
        std::ifstream in_file;
        std::ofstream out_file;
        std::string line;
        std::string content;
        std::string new_content;
        
        in_file.open(file_name);
        if(!in_file.is_open())
        {
            std::cerr << "error in opening file!" << std::endl;
            return(1);
        }
        while(getline(in_file, line))
        {
            content.append(line);
        }
        in_file.close();
        new_content = ft_replace(content, s1, s2);
        out_file.open(file_name + ".replace");
        if (!out_file.is_open())
        {
            std::cerr << "error in opening file!" << std::endl;
            return(1);
        }
        out_file << new_content;
        out_file.close();
   }
   else
        std::cerr << "Usage: " << av[0] << " <filename> <s1> <s2> " << std::endl;
    return(0);
}