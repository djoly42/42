/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 16:05:24 by djoly             #+#    #+#             */
/*   Updated: 2017/10/04 18:59:55 by djoly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &  weapon): _weapon(weapon), _name(name) {
	std::cout << this->_name << " created humanA with weapon " << this->_weapon.getType() << std::endl;
	return;
}

void	HumanA::attack(void){
	std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
}
