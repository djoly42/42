/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <djoly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 09:14:04 by djoly             #+#    #+#             */
/*   Updated: 2017/10/05 18:39:02 by djoly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef SUPERTRAP_H
# define SUPERTRAP_H
# include <iostream>
# include "NinjaTrap.hpp"
# include "FragTrap.hpp"

class SuperTrap:  public NinjaTrap,  public FragTrap{

public:
	SuperTrap(void);
	SuperTrap(std::string name);
	SuperTrap(SuperTrap const & src );
	~SuperTrap( void );
    using		FragTrap::rangedAttack;
	using		NinjaTrap::meleeAttack;

	SuperTrap &	operator=( SuperTrap const & rhs);
/*
    using           FragTrap::takeDamage;
    using           FragTrap::beRepaired;

	using          FragTrap::ImAlive;

    using			FragTrap::getHitPoints;
    using			FragTrap::getMaxHitPoints;
    using			NinjaTrap::getEnergyPoints;
    using			FragTrap::getMaxEnergyPoints;
    using			FragTrap::getLevel;
    using			FragTrap::getMeleeAttackDamage;
    using			FragTrap::getRangedAttackDamage;
    using			FragTrap::getArmorDamageReduction;

    using			FragTrap::arrgh_Damage;

private:
    using		     FragTrap::_hitPoints;
    using			FragTrap::_maxHitPoints;
    using			NinjaTrap::_energyPoints;
    using			NinjaTrap::_maxEnergyPoints;
    using			FragTrap::_level;
    //using   	    FragTrap::_name;
    using			NinjaTrap::_meleeAttackDamage;
    using			FragTrap::_rangedAttackDamage;
    using			NinjaTrap::_armorDamageReduction;
*/
};

#endif
