/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 13:16:37 by djoly             #+#    #+#             */
/*   Updated: 2017/10/03 14:12:08 by djoly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP
# include "Zombie.hpp"

class	ZombieHorde{

public:
	ZombieHorde(int n);
	~ZombieHorde(void);
	void announce(void);

private:
	Zombie*		_nZombie;
	int			_n;

};

#endif
