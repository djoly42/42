/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <djoly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 09:14:22 by djoly             #+#    #+#             */
/*   Updated: 2017/10/06 09:02:59 by djoly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "SuperTrap.hpp"
/*
SuperTrap::SuperTrap(void): FragTrap(), NinjaTrap() {
    _hitPoints= this->getHitPoints();
    _maxHitPoints=this->getMaxHitPoints();
    _energyPoints=this->NinjaTrap::getEnergyPoints();
	_maxEnergyPoints=this->getMaxEnergyPoints();
    _level=this->getLevel();
    _meleeAttackDamage=this->getMeleeAttackDamage();
	_rangedAttackDamage=this->getRangedAttackDamage();
    _armorDamageReduction=this->getArmorDamageReduction();
	std::cout << "noname: Je suis le feu, je suis la mort." << std::endl;
	return;
}

SuperTrap::SuperTrap(std::string name): FragTrap(name),   NinjaTrap(name){
    _hitPoints= this->getHitPoints();
    _maxHitPoints=this->getMaxHitPoints();
    _energyPoints=this->getEnergyPoints();
	_maxEnergyPoints=this->getMaxEnergyPoints();
    _level=this->getLevel();
    _meleeAttackDamage=this->getMeleeAttackDamage();
	_rangedAttackDamage=this->getRangedAttackDamage();
    _armorDamageReduction=this->getArmorDamageReduction();
	std::cout << name << ": Je suis le feu, je suis la mort." << std::endl;
	return;
}*/

SuperTrap::SuperTrap(void): NinjaTrap(),  FragTrap() {

    _hitPoints= 100;
    _maxHitPoints=100;
    _energyPoints=120;
	_maxEnergyPoints=120;
    _level=1;
    _meleeAttackDamage=60;
	_rangedAttackDamage=20;
    _armorDamageReduction=5;
	std::cout << "noname: Je suis le feu, je suis la mort." << std::endl;
	return;
}

SuperTrap::SuperTrap(std::string name):   NinjaTrap(name),  FragTrap(name){
    _hitPoints=100;
    _maxHitPoints=100;
    _energyPoints=120;
	_maxEnergyPoints=120;
    _level=1;
     _meleeAttackDamage=60;
     _rangedAttackDamage=20;
     _armorDamageReduction=5;
	std::cout << name << ": Je suis le feu, je suis la mort." << std::endl;
	return;
}

SuperTrap::SuperTrap(SuperTrap const & src):    NinjaTrap(src), FragTrap(src){
	std::cout << src.getName()  << ": copy me, Je suis le feu, je suis la mort." << std::endl;
	*this = src;
	return;
}
/*
SuperTrap::~SuperTrap( void): ~ClapTrap(void){
	std::cout << this->_name << ": ok im done" << std::endl;
	return;
}
*/
SuperTrap::~SuperTrap( void){
	std::cout << this->_name << ": ok im done" << std::endl;
	//this->~ClapTrap();
	return;
}

SuperTrap & SuperTrap::operator=( SuperTrap const & rhs ){
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
