/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <djoly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 12:24:19 by djoly             #+#    #+#             */
/*   Updated: 2017/10/06 08:59:32 by djoly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include <ctime>

int		main (void){

	std::srand(std::time(NULL) + std::clock());

	std::cout << "---FRAGTRAP----- " << std::endl;
	FragTrap	bubu1("bubu");
	FragTrap	bubu = bubu1;
	std::cout << "hitpoints       " <<bubu.getHitPoints() << std::endl;
	std::cout << "maxhitpoints    " <<bubu.getMaxHitPoints() << std::endl;
	std::cout << "energypoints    " <<bubu.getEnergyPoints() << std::endl;
	std::cout << "maxenergypoints " <<bubu.getMaxEnergyPoints() << std::endl;
	std::cout << "level           " <<bubu.getLevel() << std::endl;
	std::cout << "meleeattackdamage    " <<bubu.getMeleeAttackDamage() << std::endl;
	std::cout << "rangedAttackDamage    " <<bubu.getRangedAttackDamage() << std::endl;
	std::cout << "armordamagereduction " <<bubu.getArmorDamageReduction() << std::endl;



	bubu.vaulthunter_dot_exe("eren");
	bubu.rangedAttack("eren");
	bubu.meleeAttack("eren");



	bubu.takeDamage(1);
	bubu.takeDamage(6);
	std::cout << "hitPoints: " << bubu.getHitPoints() << std::endl;
	bubu.beRepaired(2);
	std::cout << "hitPoints: " << bubu.getHitPoints() << std::endl;
	bubu.vaulthunter_dot_exe("eren");
	bubu.takeDamage(200);
	std::cout << "hitPoints: " << bubu.getHitPoints() << std::endl;
	bubu.meleeAttack("eren");
	bubu.takeDamage(200);



	std::cout << "---SCAV TRAP----- " << std::endl;


	ScavTrap	bobo("bobo");

	std::cout << "hitpoints       " <<bobo.getHitPoints() << std::endl;
	std::cout << "maxhitpoints    " <<bobo.getMaxHitPoints() << std::endl;
	std::cout << "energypoints    " <<bobo.getEnergyPoints() << std::endl;
	std::cout << "maxenergypoints " <<bobo.getMaxEnergyPoints() << std::endl;
	std::cout << "level           " <<bobo.getLevel() << std::endl;
	std::cout << "meleeattackdamage    " <<bobo.getMeleeAttackDamage() << std::endl;
	std::cout << "rangedAttackDamage    " <<bobo.getRangedAttackDamage() << std::endl;
	std::cout << "armordamagereduction " <<bobo.getArmorDamageReduction() << std::endl;



	bobo.challengerNewcomer("eren");
	bobo.rangedAttack("eren");
	bobo.meleeAttack("eren");



	bobo.takeDamage(1);
	bobo.takeDamage(6);
	std::cout << "hitPoints: " << bobo.getHitPoints() << std::endl;
	bobo.beRepaired(2);
	std::cout << "hitPoints: " << bobo.getHitPoints() << std::endl;
	bobo.challengerNewcomer("eren");
	bobo.takeDamage(200);
	std::cout << "hitPoints: " << bobo.getHitPoints() << std::endl;
	bobo.meleeAttack("eren");
	bobo.takeDamage(200);




	return 0;
}
