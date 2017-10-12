/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <djoly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 12:24:19 by djoly             #+#    #+#             */
/*   Updated: 2017/10/05 22:46:35 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"
# include <cstdlib>
# include <ctime>

int		main (void){


	std::srand(std::time(NULL) + std::clock());

	FragTrap	bobo1("bobo");
	FragTrap	bobo = bobo1;
	std::cout << "hitpoints       " <<bobo.getHitPoints() << std::endl;
	std::cout << "maxhitpoints    " <<bobo.getMaxHitPoints() << std::endl;
	std::cout << "energypoints    " <<bobo.getEnergyPoints() << std::endl;
	std::cout << "maxenergypoints " <<bobo.getMaxEnergyPoints() << std::endl;
	std::cout << "level           " <<bobo.getLevel() << std::endl;
	std::cout << "meleeattackdamage    " <<bobo.getMeleeAttackDamage() << std::endl;
	std::cout << "rangedAttackDamage    " <<bobo.getRangedAttackDamage() << std::endl;
	std::cout << "armordamagereduction " <<bobo.getArmorDamageReduction() << std::endl;
	
	bobo.vaulthunter_dot_exe("eren");
	bobo.rangedAttack("eren");
	bobo.meleeAttack("eren");



	bobo.takeDamage(1);
	bobo.takeDamage(6);
	std::cout << "hitPoints: " << bobo.getHitPoints() << std::endl;
	bobo.beRepaired(2);
	std::cout << "hitPoints: " << bobo.getHitPoints() << std::endl;
	bobo.vaulthunter_dot_exe("eren");
	bobo.takeDamage(200);
	std::cout << "hitPoints: " << bobo.getHitPoints() << std::endl;
	bobo.meleeAttack("eren");
	bobo.takeDamage(200);




	return 0;
}
