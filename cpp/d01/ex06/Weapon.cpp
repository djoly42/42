/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 15:57:56 by djoly             #+#    #+#             */
/*   Updated: 2017/10/04 19:06:30 by djoly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type): _type(type){
	std::cout << "created weapon, with type  " << _type << std::endl;
	return;
}


std::string const & Weapon::getType(){
	return this->_type;
}

void				Weapon::setType(std::string type){
	this->_type = type;
	std::cout << "set type weapon " << _type << std::endl;
}


