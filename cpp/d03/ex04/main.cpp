/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <djoly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 12:24:19 by djoly             #+#    #+#             */
/*   Updated: 2017/10/05 23:48:59 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"
# include "SuperTrap.hpp"
# include <ctime>

int		main (void){




	std::cout << "---FRAGTRAP----- " << std::endl;
	FragTrap	bubu("bubu");

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



	std::srand(std::time(NULL) + std::clock());
    std::cout << "---NINJA TRAP----- " << std::endl;

    NinjaTrap	bibi("bibi");

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

    std::cout << "---SUPER TRAP----- " << std::endl;

    SuperTrap	BABA("BABA");
    std::cout << "hitPoints: " << BABA.getHitPoints() << std::endl;
    std::cout << "energyPoints: " << BABA.getEnergyPoints() << std::endl;

    //BABA.NinjaShoeBox(bobo);
    BABA.rangedAttack("eren");
    BABA.meleeAttack("eren");



    BABA.takeDamage(1);
    BABA.takeDamage(6);
    std::cout << "hitPoints: " << BABA.getHitPoints() << std::endl;
    BABA.beRepaired(2);
    std::cout << "hitPoints: " << BABA.getHitPoints() << std::endl;
    BABA.NinjaShoeBox(bubu);
   // BABA.NinjaShoeBox(BABA);
    std::cout << "hitPoints: " << BABA.getHitPoints() << std::endl;
    BABA.meleeAttack("eren");
    //BABA.takeDamage(200);


	return 0;
}
