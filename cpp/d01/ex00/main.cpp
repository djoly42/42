/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 10:14:28 by djoly             #+#    #+#             */
/*   Updated: 2017/10/04 18:37:04 by djoly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void 	ponyOnTheHeap(){

	Pony*	baboun = new Pony("baboun", 1, "white");
	delete baboun;	
	std::cout << "end ponyOnTheHeap" << std::endl;
	return; 
}

void	ponyOnTheStack(){
	Pony	bobo = Pony("bobo", 5, "black");
	

	std::cout << "end ponyOnTheStack" << std::endl;
	return ;
}

int		main(){
	std::cout << "call ponyOnTheHeap" << std::endl;
	ponyOnTheHeap();

	std::cout << "call ponyOnTheStack" << std::endl;
	ponyOnTheStack();

	std::cout << "end main" << std::endl;
	return 0;
}
