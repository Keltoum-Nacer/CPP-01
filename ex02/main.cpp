/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knacer <knacer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 10:27:47 by knacer            #+#    #+#             */
/*   Updated: 2024/10/11 11:53:13 by knacer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<string>

int main()
{
    std::string string;
    std::string* stringPtr = &string;
    std::string& stringRef =string;
    
    string = "HI THIS IS BRAIN";
    std::cout << &string << std::endl;
    std::cout << stringPtr << std::endl;
    std::cout << &stringRef << std::endl;
    std::cout << string << std::endl;
    std::cout << *stringPtr << std::endl;
    std::cout << stringRef << std::endl;
}