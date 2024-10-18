/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knacer <knacer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:03:04 by knacer            #+#    #+#             */
/*   Updated: 2024/10/12 14:30:03 by knacer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string weapon_type)
{
    this->type = weapon_type;
}

std::string Weapon::getType()
{
    return(this->type);
}

void Weapon::setType(const std::string type)
{
    this->type = type;
}

