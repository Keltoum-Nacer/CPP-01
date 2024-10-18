/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knacer <knacer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:06:39 by knacer            #+#    #+#             */
/*   Updated: 2024/10/12 15:33:35 by knacer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include"Weapon.hpp"

class HumanA
{
	private:
		Weapon&	weapon;
		std::string	name;
	public:
		HumanA(std::string human_name, Weapon& weaponn);
		void attack();
};

#endif