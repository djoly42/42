/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <djoly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 13:06:29 by djoly             #+#    #+#             */
/*   Updated: 2017/10/05 23:38:21 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void):ClapTrap(){
    _hitPoints=100;
    _maxHitPoints=100;
    _energyPoints=50;
    _maxEnergyPoints=50;
    _level=1;
    _meleeAttackDamage=20;
    _rangedAttackDamage=15;
    _armorDamageReduction=3;
	std::cout << "noname: Je suis une machine mortelle remplie d'acide. " << std::endl;
	return;
}

ScavTrap::ScavTrap(std::string name):ClapTrap(name){
    _hitPoints=100;
    _maxHitPoints=100;
    _energyPoints=50;
    _maxEnergyPoints=50;
    _level=1;
    _meleeAttackDamage=20;
    _rangedAttackDamage=15;
    _armorDamageReduction=3;

	std::cout << name << ": Je suis une machine mortelle remplie d'acide. " << std::endl;
	return;
}

ScavTrap::ScavTrap(ScavTrap const & src):ClapTrap(src){
	std::cout << src.getName()  << ": copy me, Je suis une machine mortelle remplie d'acide. " << std::endl;
	*this = src;
	return;
}

ScavTrap::~ScavTrap( void){
	//this->~ClapTrap();
	return;
}


void		ScavTrap::rangedAttack(std::string const & target){
	if (this->ImAlive()){
			std::cout << "FR4G-TP "<< this->_name << " attacks " << target << " at range, causing "
						<< this->_rangedAttackDamage  << " points of damage !" << std::endl;
	}
	return;
}

void		ScavTrap::meleeAttack(std::string const & target){
	if (this->ImAlive()){
			std::cout << "FR4G-TP "<< this->_name << " attacks " << target << " at melee, causing "
						<< this->_meleeAttackDamage  << " points of damage !" << std::endl;
	}
	return;
}



void		ScavTrap::challengerNewcomer(std::string const & target){
	if (!this->ImAlive())
		return;
	if (this->_energyPoints < 25){
		std::cout <<  this->_name << ": oh shit, i dont have enough energy " << std::endl;
		return ;
	}
	std::string		actions[] = {"See if you can fit in your fridge.", "Start talking to people in other stalls at a public bathroom. See if you can start a conversation.", "Get away with playing The Floor Is Lava for the entire day.", "Get a grocery clerk to sell you one single grape...", "Catch a falling leaf. This is particularly hard if it's not the middle of autumn"};
	int action = rand() % 5;
	std::cout << "FR4G-TP "<< this->_name << " challenge " << target << " : hey you !! try to " << actions[action] <<", if you succeed, then ok..  " <<  std::endl;
	return ;
}

ScavTrap & ScavTrap::operator=( ScavTrap const & rhs ){
	if( this != &rhs ){
		this->_hitPoints = rhs.getHitPoints();
		this->_maxHitPoints		= rhs.getMaxHitPoints();
		this->_energyPoints 		= rhs.getEnergyPoints();
		this->_maxEnergyPoints		= rhs.getMaxEnergyPoints();
		this->_level		= rhs.getLevel();
		this->_name					= rhs.getName();
		this->_meleeAttackDamage	= rhs.getMeleeAttackDamage();
		this->_rangedAttackDamage		= rhs.getRangedAttackDamage();
		this->_armorDamageReduction		= rhs.getArmorDamageReduction();
	}
	return *this;
}
