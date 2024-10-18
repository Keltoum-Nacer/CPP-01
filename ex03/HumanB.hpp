/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knacer <knacer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:06:39 by knacer            #+#    #+#             */
/*   Updated: 2024/10/12 15:23:12 by knacer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include"Weapon.hpp"

class HumanB
{
	private:
		Weapon* weapon;
		std::string	name;
	public:
		HumanB(std::string name);
        void setWeapon(Weapon &weaponn);
		void attack();
};

#endif