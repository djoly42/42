/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 10:59:48 by djoly             #+#    #+#             */
/*   Updated: 2017/10/04 13:03:58 by djoly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void){


	return;
}

ZombieEvent::~ZombieEvent(void){

	return ;
}

void ZombieEvent::setZombieType(std::string type){
	this->_type = type;
	return;
}

Zombie* ZombieEvent::newZombie(std::string name){

	this->z = new Zombie();
	this->z->setName(name);
	this->z->setType(this->_type);

	return this->z;
}

Zombie* ZombieEvent::randomChump(){
	std::string		name[] = {"eren", "despatricio", "olivier", "alex"};
	std::string		rName = name[rand() % 4];
	Zombie*			z = newZombie(rName);
	z->announce();
	return z;
}

