/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <djoly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 12:24:19 by djoly             #+#    #+#             */
/*   Updated: 2017/10/05 23:27:31 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"
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


			ScavTrap	bobo1("bobo");
			ScavTrap	bobo = bobo1;

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

    std::cout << "---NINJA TRAP----- " << std::endl;

    NinjaTrap	bibi1("bibi");
	NinjaTrap	bibi = bibi1;

	std::cout << "hitpoints       " <<bibi.getHitPoints() << std::endl;
	std::cout << "maxhitpoints    " <<bibi.getMaxHitPoints() << std::endl;
	std::cout << "energypoints    " <<bibi.getEnergyPoints() << std::endl;
	std::cout << "maxenergypoints " <<bibi.getMaxEnergyPoints() << std::endl;
	std::cout << "level           " <<bibi.getLevel() << std::endl;
	std::cout << "meleeattackdamage    " <<bibi.getMeleeAttackDamage() << std::endl;
	std::cout << "rangedAttackDamage    " <<bibi.getRangedAttackDamage() << std::endl;
	std::cout << "armordamagereduction " <<bibi.getArmorDamageReduction() << std::endl;
    bibi.NinjaShoeBox(bobo);
    bibi.rangedAttack("eren");
    bibi.meleeAttack("eren");



    bibi.takeDamage(1);
    bibi.takeDamage(6);
    std::cout << "hitPoints: " << bibi.getHitPoints() << std::endl;
    bibi.beRepaired(2);
    std::cout << "hitPoints: " << bibi.getHitPoints() << std::endl;
    bibi.NinjaShoeBox(bubu);
    bibi.NinjaShoeBox(bibi);
    std::cout << "hitPoints: " << bibi.getHitPoints() << std::endl;
    bibi.meleeAttack("eren");
    bibi.takeDamage(200);

	return 0;
}
