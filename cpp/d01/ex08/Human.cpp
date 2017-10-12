/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 19:25:30 by djoly             #+#    #+#             */
/*   Updated: 2017/10/04 10:15:19 by djoly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(void){
	return;
}

Human::~Human(void){
	return;
}
void Human::meleeAttack(std::string const & target){
	std::cout << "melee Attack to " << target <<std::endl;

	return ;
}

void Human::rangedAttack(std::string const & target){
	std::cout << "ranged Attack to " << target << std::endl;
	return;
}

void Human::intimidatingShout(std::string const & target){
	std::cout << "intimidation Shout to " << target << std::endl;
	return;
}

void Human::action(std::string const & action_name, std::string const & target){
	typedef void(Human::*Pointeur)(std::string const &);
	Pointeur myFunctions[3];
	myFunctions[0] = &Human::meleeAttack;
	myFunctions[1] = &Human::rangedAttack;
	myFunctions[2] = &Human::intimidatingShout;

	std::string		name[] = {"meleeAttack","rangedAttack","intimidatingShout"};
	int i = 0;
	while(i < 3){
		if(action_name.compare(name[i])){
			break;
		}
		i++;
	}
	(this->*myFunctions[i])(target);

}
