/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <djoly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 14:28:30 by djoly             #+#    #+#             */
/*   Updated: 2017/10/05 23:23:23 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): _name("noname") {
	return;
}

ClapTrap::ClapTrap(std::string name): _name(name)  {
	return;
}

ClapTrap::ClapTrap(ClapTrap const & src){
	*this = src;
	return;
}

ClapTrap::~ClapTrap( void){
	return;
}

void		ClapTrap::takeDamage(unsigned int damage){
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

void	ClapTrap::beRepaired(unsigned int amount){
	this->_hitPoints += amount;
   	if (this->_hitPoints > this->_maxHitPoints)
		this->_hitPoints = this->_maxHitPoints;
	std::cout << "Hmmm ca fait du bien , encore ! " << std::endl;
	return;
}


ClapTrap & ClapTrap::operator=( ClapTrap const & rhs ){
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

bool			ClapTrap::ImAlive(void){
	if(this->_hitPoints == 0)
		return false;
	else
		return true;
}


std::string		ClapTrap::getName(void) const{
	return this->_name;
}

unsigned int		ClapTrap::getHitPoints(void) const{
	return this->_hitPoints;
}

unsigned int		ClapTrap::getMaxHitPoints(void) const{
	return this->_maxHitPoints;
}

unsigned int		ClapTrap::getEnergyPoints(void) const{
	return this->_energyPoints;
}

unsigned int		ClapTrap::getMaxEnergyPoints(void) const{
	return this->_maxEnergyPoints;
}

unsigned int		ClapTrap::getLevel(void) const{
	return this->_level;
}

unsigned int		ClapTrap::getMeleeAttackDamage(void) const{
	return this->_meleeAttackDamage;
}



unsigned int		ClapTrap::getRangedAttackDamage(void) const{
	return this->_rangedAttackDamage;
}


unsigned int		ClapTrap::getArmorDamageReduction(void) const{
	return this->_armorDamageReduction;
}

unsigned int		ClapTrap::arrgh_Damage(unsigned int const & damage){
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
