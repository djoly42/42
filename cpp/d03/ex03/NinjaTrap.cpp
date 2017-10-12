/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <djoly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 15:37:21 by djoly             #+#    #+#             */
/*   Updated: 2017/10/05 23:37:29 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void): ClapTrap(){

    _hitPoints= 60;
    _maxHitPoints=60;
    _energyPoints=120;
	_maxEnergyPoints=120;
    _level=1;
    _meleeAttackDamage=60;
	_rangedAttackDamage=5;
    _armorDamageReduction=0;
	std::cout << "noname: Un café, bien noir, comme mon âme." << std::endl;
	return;
}

NinjaTrap::NinjaTrap(std::string name): ClapTrap(name){
    _hitPoints=60;
    _maxHitPoints=60;
    _energyPoints=120;
	_maxEnergyPoints=120;
    _level=1;
     _meleeAttackDamage=60;
     _rangedAttackDamage=5;
     _armorDamageReduction=0;
	std::cout << name << ": Un café, bien noir, comme mon âme." << std::endl;
	return;
}

NinjaTrap::NinjaTrap(NinjaTrap const & src): ClapTrap(src){
	std::cout << src.getName()  << ": copy me, Un café, bien noir, comme mon âme." << std::endl;
	*this = src;
	return;
}

void		NinjaTrap::rangedAttack(std::string const & target){
	if (this->ImAlive()){
			std::cout << "FR4G-TP "<< this->_name << " attacks " << target << " at range, causing "
						<< this->_rangedAttackDamage  << " points of damage NINJAAAAA!" << std::endl;
	}
	return;
}

void		NinjaTrap::meleeAttack(std::string const & target){
	if (this->ImAlive()){
			std::cout << "FR4G-TP "<< this->_name << " attacks " << target << " at melee, causing "
						<< this->_meleeAttackDamage  << " points of damage NINJAAA!" << std::endl;
	}
	return;
}


void		NinjaTrap::NinjaShoeBox(FragTrap & target){
	if (this->ImAlive()){
			std::cout << "FR4G-TP "<< this->_name << " attacks " << target.getName() << " with a building, causing "
						<< 42  << " points of damage !" << std::endl;
            target.takeDamage(42);
	}
	return;
}
void		NinjaTrap::NinjaShoeBox(ScavTrap & target){
	if (this->ImAlive()){
			std::cout << "FR4G-TP "<< this->_name << " attacks " << target.getName() << " with a plane, causing "
						<< 7  << " points of damage !" << std::endl;
            target.takeDamage(7);
	}
	return;
}

void		NinjaTrap::NinjaShoeBox(NinjaTrap & target){
	if (this->ImAlive()){
			std::cout << "FR4G-TP "<< this->_name << " attacks " << target.getName() << " with a planet, causing "
						<< 420000  << " points of damage !" << std::endl;
            target.takeDamage(420000);
	}
	return;
}
/*
NinjaTrap::~NinjaTrap( void): ~ClapTrap(void){
	std::cout << this->_name << ": ok im done" << std::endl;
	return;
}
*/
NinjaTrap::~NinjaTrap( void){
	return;
}


NinjaTrap & NinjaTrap::operator=( NinjaTrap const & rhs ){
	std::cout << "overload = " << std::endl;
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
