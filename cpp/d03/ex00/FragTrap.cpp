/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <djoly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 09:14:22 by djoly             #+#    #+#             */
/*   Updated: 2017/10/05 23:39:17 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "FragTrap.hpp"

FragTrap::FragTrap(void): _hitPoints(100), _maxHitPoints(100), _energyPoints(100),
							_maxEnergyPoints(100), _level(1), _name("noname"), _meleeAttackDamage(30),
							_rangedAttackDamage(20), _armorDamageReduction(5)  {
	std::cout << "noname: Je suis le feu, je suis la mort." << std::endl;
	return;
}

FragTrap::FragTrap(std::string name): _hitPoints(100), _maxHitPoints(100), _energyPoints(100),
							_maxEnergyPoints(100), _level(1), _name(name), _meleeAttackDamage(30),
							_rangedAttackDamage(20), _armorDamageReduction(5)  {
	std::cout << name << ": Je suis le feu, je suis la mort." << std::endl;
	return;
}

FragTrap::FragTrap(FragTrap const & src){
	std::cout << src.getName()  << ": copy me, Je suis le feu, je suis la mort." << std::endl;
	*this = src;
	return;
}

FragTrap::~FragTrap( void){
	return;
}

void		FragTrap::rangedAttack(std::string const & target){
	if (this->ImAlive()){
			std::cout << "FR4G-TP "<< this->_name << " hits " << target << " at range, causing "
						<< this->_rangedAttackDamage  << " damage in this face !" << std::endl;
	}
	return;
}

void		FragTrap::meleeAttack(std::string const & target){
	if (this->ImAlive()){
			std::cout << "FR4G-TP "<< this->_name << " hits " << target << " at melee, causing "
						<< this->_meleeAttackDamage  << " points in this face !" << std::endl;
	}
	return;
}


void		FragTrap::takeDamage(unsigned int damage){
	int ret = 0;
	if (this->_hitPoints == 0){
		std::cout << this->_name << ": I already dead Bro !" << std::endl;
		return;
	}
	if (damage <= this->_armorDamageReduction){
		std::cout << this->_name << ": HaHAHA biggest and best armor in the world" << std::endl;
		return;
	}

   	if (damage < (this->_hitPoints + this->_armorDamageReduction)){
		ret = damage - this->_armorDamageReduction;
		this->_hitPoints -= ret;
		std::cout << this->_name << ": Ouch!, " << ret << " damage in my face " << std::endl;
	}
	else{
		int reste;
		ret = damage - this->_armorDamageReduction;
		reste = this->_hitPoints - ret;
		ret =  ret  + reste;
		this->_hitPoints = 0;
		this->_armorDamageReduction = 0;
		std::cout << this->_name << ": Ouch!, " << ret << " damage in my face " << std::endl;
	}
	if (this->_hitPoints == 0)
		std::cout << this->_name << ": I think im dead .." << std::endl;
	return ;
}

void	FragTrap::beRepaired(unsigned int amount){
	this->_hitPoints += amount;
   	if (this->_hitPoints > this->_maxHitPoints)
		this->_hitPoints = this->_maxHitPoints;
	std::cout << "Hmmm ca fait du bien , encore ! " << std::endl;
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

bool			FragTrap::ImAlive(void){
	if(this->_hitPoints == 0)
		return false;
	else
		return true;
}


std::string		FragTrap::getName(void) const{
	return this->_name;
}

unsigned int		FragTrap::getHitPoints(void) const{
	return this->_hitPoints;
}

unsigned int		FragTrap::getMaxHitPoints(void) const{
	return this->_maxHitPoints;
}

unsigned int		FragTrap::getEnergyPoints(void) const{
	return this->_energyPoints;
}

unsigned int		FragTrap::getMaxEnergyPoints(void) const{
	return this->_maxEnergyPoints;
}

unsigned int		FragTrap::getLevel(void) const{
	return this->_level;
}

unsigned int		FragTrap::getMeleeAttackDamage(void) const{
	return this->_meleeAttackDamage;
}



unsigned int		FragTrap::getRangedAttackDamage(void) const{
	return this->_rangedAttackDamage;
}


unsigned int		FragTrap::getArmorDamageReduction(void) const{
	return this->_armorDamageReduction;
}

unsigned int		FragTrap::arrgh_Damage(unsigned int const & damage){
	int ret = 0;
	if (this->_hitPoints == 0){
		std::cout << this->_name << ": I already dead Bro !" << std::endl;
		return ret;
	}

   	if (damage < (this->_hitPoints + this->_armorDamageReduction)){
		ret = damage - this->_armorDamageReduction;
		this->_hitPoints -= ret;
		std::cout << this->_name << ": Ouch!, " << ret << " damage in my face " << std::endl;
	}
	else{
		int reste;
		ret = damage - this->_armorDamageReduction;
		reste = this->_hitPoints - ret;
		ret =  damage - reste;
		this->_hitPoints = 0;
		std::cout << this->_name << ": Ouch!, " << ret << " damage in my face " << std::endl;
	}
	if (this->_hitPoints == 0)
		std::cout << this->_name << ": I think im dead .." << std::endl;
	return ret;
}
