/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <djoly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 13:12:06 by djoly             #+#    #+#             */
/*   Updated: 2017/10/04 18:46:04 by djoly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n):_n(n) {
	int i = 0;
	this->_nZombie = new Zombie[n];
	std::string		names[] = { "alex" , "patricio", "eren", "batman", "superman"};

	while (i < n){
		this->_nZombie[i].setName(names[rand() % 5]);
		this->_nZombie[i].setType("runners");
		i++;
	}
	return;
}

ZombieHorde::~ZombieHorde(){
	std::cout << "call horde destructor " << std::endl;
	delete [] this->_nZombie;
	std::cout << "end horde destructor" << std::endl;
}

void ZombieHorde::announce(){
	int		i = 0;

	while (i < this->_n){
		this->_nZombie[i].announce();
		i++;
	}
	return ;
}
