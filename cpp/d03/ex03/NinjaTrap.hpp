/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <djoly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 15:36:57 by djoly             #+#    #+#             */
/*   Updated: 2017/10/05 23:24:18 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef NINJATRAP_H
# define NINJATRAP_H
# include <iostream>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap: public ClapTrap{

public:
	NinjaTrap(void);
	NinjaTrap(std::string name);
	NinjaTrap(NinjaTrap const & src );
	~NinjaTrap( void );

		void		rangedAttack(std::string const & target);
		void		meleeAttack(std::string const & target);
	void NinjaShoeBox(FragTrap & target);
	void NinjaShoeBox(ScavTrap & target);
    void NinjaShoeBox(NinjaTrap & target);
	void		vaulthunter_dot_exe(std::string const & target);

	NinjaTrap &	operator=( NinjaTrap const & rhs);

};

#endif
