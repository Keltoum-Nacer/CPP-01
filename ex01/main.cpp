/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knacer <knacer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 09:56:27 by knacer            #+#    #+#             */
/*   Updated: 2024/10/11 10:10:06 by knacer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int main()
{
    int i = 0;
    Zombie* zombies = zombieHorde(4, "zozoo");
    while(i < 4)
    {
        zombies[i].announce();
        i++;
    }
    delete[] zombies;
}
