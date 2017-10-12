/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <djoly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 14:23:12 by djoly             #+#    #+#             */
/*   Updated: 2017/10/05 23:06:56 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef CLAPTRAP_H
# define CLAPTRAP_H
# include <iostream>
# include <cstdlib>

class ClapTrap{

public:
	ClapTrap(void);
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const & src );
	~ClapTrap( void );

	void		rangedAttack(std::string const & target);
	void		meleeAttack(std::string const & target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);

	ClapTrap &	operator=( ClapTrap const & rhs);

	bool		ImAlive(void);

	std::string getName(void)const;
	unsigned int			getHitPoints(void)const;
	unsigned int			getMaxHitPoints(void)const;
	unsigned int			getEnergyPoints(void)const;
	unsigned int			getMaxEnergyPoints(void)const;
	unsigned int			getLevel(void)const;
	unsigned int			getMeleeAttackDamage(void)const;
	unsigned int			getRangedAttackDamage(void)const;
	unsigned int			getArmorDamageReduction(void)const;

	unsigned int			arrgh_Damage(unsigned int const & damage);

protected:
	unsigned int			_hitPoints;
	unsigned int			_maxHitPoints;
	unsigned int			_energyPoints;
	unsigned int			_maxEnergyPoints;
	unsigned int			_level;
	std::string	_name;
	unsigned int			_meleeAttackDamage;
	unsigned int			_rangedAttackDamage;
	unsigned int			_armorDamageReduction;


};

#endif
