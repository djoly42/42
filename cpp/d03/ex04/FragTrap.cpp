/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <djoly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 09:14:22 by djoly             #+#    #+#             */
/*   Updated: 2017/10/05 23:50:14 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap(){

    _hitPoints= 100;
    _maxHitPoints=100;
    _energyPoints=100;
	_maxEnergyPoints=100;
    _level=1;
    _meleeAttackDamage=30;
	_rangedAttackDamage=20;
    _armorDamageReduction=5;
	std::cout << "noname: Je suis le feu, je suis la mort." << std::endl;
	return;
}

FragTrap::FragTrap(std::string name): ClapTrap(name){
    _hitPoints=100;
    _maxHitPoints=100;
    _energyPoints=100;
	_maxEnergyPoints=100;
    _level=1;
     _meleeAttackDamage=30;
     _rangedAttackDamage=20;
     _armorDamageReduction=5;
	std::cout << name << ": Je suis le feu, je suis la mort." << std::endl;
	return;
}
void		FragTrap::rangedAttack(std::string const & target){
    std::cout << "rangedAttach FRAGTRAP " << std::endl;
	if (this->ImAlive()){
			std::cout << "FR4G-TP "<< this->_name << " attacks " << target << " at range, causing "
						<< this->_rangedAttackDamage  << " points of damage !" << std::endl;
	}
	return;
}

void		FragTrap::meleeAttack(std::string const & target){
    std::cout << "meleedAttach FRAGTRAP " << std::endl;
	if (this->ImAlive()){
			std::cout << "FR4G-TP "<< this->_name << " attacks " << target << " at melee, causing "
						<< this->_meleeAttackDamage  << " points of damage !" << std::endl;
	}
	return;
}




FragTrap::FragTrap(FragTrap const & src): ClapTrap(src){
	std::cout << src.getName()  << ": copy me, Je suis le feu, je suis la mort." << std::endl;
	*this = src;
	return;
}
/*
FragTrap::~FragTrap( void): ~ClapTrap(void){
	std::cout << this->_name << ": ok im done" << std::endl;
	return;
}
*/
FragTrap::~FragTrap( void){
	std::cout << this->_name << ": ok im done" << std::endl;
	//this->~ClapTrap();
	return;
}

void		FragTrap::vaulthunter_dot_exe(std::string const & target){
	if (!this->ImAlive())
		return;
	if (this->_energyPoints < 25){
		std::cout <<  this->_name << ": oh shit, i dont have enough energy " << std::endl;
		return ;
	}
	std::string		actions[] = {"keyboardAttack", "macAttack", "screenAttack", "usbStickAttack", "mouseAttack"};
	int action = rand() % 5;
	int damage = rand() % 100;
	std::cout << "FR4G-TP "<< this->_name << " attacks " << target << " with "<< actions[action] <<", causing "
		<< damage  << " points of damage !" << std::endl;
	return ;
}

FragTrap & FragTrap::operator=( FragTrap const & rhs ){
	if( this != &rhs )
		this->_hitPoints = rhs.getHitPoints();
		this->_maxHitPoints		= rhs.getMaxHitPoints();
		this->_energyPoints 		= rhs.getEnergyPoints();
		this->_maxEnergyPoints		= rhs.getMaxEnergyPoints();
		this->_level		= rhs.getLevel();
		this->_name					= rhs.getName();
		this->_meleeAttackDamage	= rhs.getMeleeAttackDamage();
		this->_rangedAttackDamage		= rhs.getRangedAttackDamage();
		this->_armorDamageReduction		= rhs.getArmorDamageReduction();
	return *this;
}
