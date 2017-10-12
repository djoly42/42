/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <djoly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 13:06:08 by djoly             #+#    #+#             */
/*   Updated: 2017/10/05 23:10:36 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SCAVTRAP_H
# define SCAVTRAP_H
# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{

public:
	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const & src );
	~ScavTrap( void );

	void		rangedAttack(std::string const & target);
	void		meleeAttack(std::string const & target);
	void		challengerNewcomer(std::string const & target);

	ScavTrap &	operator=( ScavTrap const & rhs);


};

#endif
