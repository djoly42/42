/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <djoly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 10:58:23 by djoly             #+#    #+#             */
/*   Updated: 2017/10/04 13:07:27 by djoly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){
	std::cout << "Zombie reborn" << std::endl;
	return;
}

Zombie::~Zombie( void ){
	std::cout << this->name << " dies again" << std::endl;
	return ;
}

void	Zombie::announce( void ){
	std::cout << "<" << this->name << " (" << this->type << ")> Braiiiiiinnnsss" << std::endl;
	return ;
}

std::string Zombie::getName(void)const{
	return this->name;
}

void		Zombie::setName(std::string n){
	this->name = n;
}

std::string Zombie::getType(void)const{
	return this->type;
}

void		Zombie::setType(std::string t){
	this->type = t;
}
