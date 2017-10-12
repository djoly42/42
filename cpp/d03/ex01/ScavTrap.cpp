/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <djoly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 13:06:29 by djoly             #+#    #+#             */
/*   Updated: 2017/10/05 23:39:04 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void): _hitPoints(100), _maxHitPoints(100), _energyPoints(50),
							_maxEnergyPoints(50), _level(1), _name("noname"), _meleeAttackDamage(20),
							_rangedAttackDamage(15), _armorDamageReduction(3)  {
	std::cout << "noname: Je suis une machine mortelle remplie d'acide. " << std::endl;
	return;
}

ScavTrap::ScavTrap(std::string name): _hitPoints(100), _maxHitPoints(100), _energyPoints(50),
							_maxEnergyPoints(50), _level(1), _name(name), _meleeAttackDamage(20),
							_rangedAttackDamage(15), _armorDamageReduction(3)  {
	std::cout << name << ": Je suis une machine mortelle remplie d'acide. " << std::endl;
	return;
}

ScavTrap::ScavTrap(ScavTrap const & src){
	std::cout << src.getName()  << ": copy me, Je suis une machine mortelle remplie d'acide. " << std::endl;
	*this = src;
	return;
}

ScavTrap::~ScavTrap( void){
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


void		ScavTrap::takeDamage(unsigned int damage){
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

void	ScavTrap::beRepaired(unsigned int amount){
	this->_hitPoints += amount;
   	if (this->_hitPoints > this->_maxHitPoints)
		this->_hitPoints = this->_maxHitPoints;
	std::cout << "Hmmm ca fait du bien , encore ! " << std::endl;
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

bool			ScavTrap::ImAlive(void){
	if(this->_hitPoints == 0)
		return false;
	else
		return true;
}


std::string		ScavTrap::getName(void) const{
	return this->_name;
}

unsigned int		ScavTrap::getHitPoints(void) const{
	return this->_hitPoints;
}

unsigned int		ScavTrap::getMaxHitPoints(void) const{
	return this->_maxHitPoints;
}

unsigned int		ScavTrap::getEnergyPoints(void) const{
	return this->_energyPoints;
}

unsigned int		ScavTrap::getMaxEnergyPoints(void) const{
	return this->_maxEnergyPoints;
}

unsigned int		ScavTrap::getLevel(void) const{
	return this->_level;
}

unsigned int		ScavTrap::getMeleeAttackDamage(void) const{
	return this->_meleeAttackDamage;
}



unsigned int		ScavTrap::getRangedAttackDamage(void) const{
	return this->_rangedAttackDamage;
}


unsigned int		ScavTrap::getArmorDamageReduction(void) const{
	return this->_armorDamageReduction;
}

unsigned int		ScavTrap::arrgh_Damage(unsigned int const & damage){
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
