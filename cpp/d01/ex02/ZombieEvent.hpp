/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 10:58:54 by djoly             #+#    #+#             */
/*   Updated: 2017/10/03 12:15:12 by djoly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP
# include "Zombie.hpp"

class	ZombieEvent{

public:
	ZombieEvent();
	~ZombieEvent();
	void	setZombieType(std::string type);
	Zombie* newZombie(std::string name);
	Zombie* randomChump();

private:
	std::string	_type;
	Zombie*		z;


};

#endif

