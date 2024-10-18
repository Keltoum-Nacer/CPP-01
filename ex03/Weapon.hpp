/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knacer <knacer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 14:23:37 by knacer            #+#    #+#             */
/*   Updated: 2024/10/12 14:30:51 by knacer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include<iostream>
#include<string>

class Weapon
{
    private:
        std::string type;
    public:
        Weapon(std::string weapon_type);
        void setType(std::string type);
        std::string getType();
};

#endif
