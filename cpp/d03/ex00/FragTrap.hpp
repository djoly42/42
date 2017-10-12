/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <djoly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 09:14:04 by djoly             #+#    #+#             */
/*   Updated: 2017/10/05 22:53:26 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FRAGTRAP_H
# define FRAGTRAP_H
# include <iostream>
# include <cstdlib>

class FragTrap{

public:
	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(FragTrap const & src );
	~FragTrap( void );

	void		rangedAttack(std::string const & target);
	void		meleeAttack(std::string const & target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);

	void		vaulthunter_dot_exe(std::string const & target);

	FragTrap &	operator=( FragTrap const & rhs);

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

private:
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
