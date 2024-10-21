/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knacer <knacer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 13:57:39 by knacer            #+#    #+#             */
/*   Updated: 2024/10/21 15:21:27 by knacer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Harl.hpp"

void call_levels(int j)
{
    Harl harl;
    void( Harl::*levels[4])() = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
    while ( j < 4)
    {
        (harl.*levels[j])();
        j++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        int i = 0;
        std::string names[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
        while (i < 4)
        {
            if (av[1] == names[i])
                break;
            i++;
        }
        switch(i)
        {
            case 0 :
                call_levels(0);
                break;
            case 1 :
                call_levels(1);
                break;
            case 2 :
                call_levels(2);
                break;
            case 3 :
                call_levels(3);
                break;
            default :
                std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
                break;
        }
    }
    else 
        std::cout << "ERROR!" << std::endl;
}