/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 16:05:24 by djoly             #+#    #+#             */
/*   Updated: 2017/10/03 16:40:35 by djoly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name){
	return;
}

void	HumanB::attack(void){
	std::cout << this->_name << " attack with his " << this->_weapon->getType() << std::endl;
	return ;
}
void	HumanB::setWeapon(Weapon & weapon){
	this->_weapon = &weapon;
	return;
}


