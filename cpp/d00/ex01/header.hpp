/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 13:41:29 by djoly             #+#    #+#             */
/*   Updated: 2017/10/02 15:10:27 by djoly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_HPP
# define HEADER_HPP
# include <iostream>

struct	Line{
	int			index;
	Contact		current;
	std::string firstName;
	std::string lastName;
	std::string nickname;
};

#endif
