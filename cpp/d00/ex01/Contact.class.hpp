/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 10:44:00 by djoly             #+#    #+#             */
/*   Updated: 2017/10/02 12:21:29 by djoly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H
# include <iostream>
class	Contact {

public:
	Contact(void);
	~Contact(void);
	bool		get_isSet();
	static int	getNbContact(void);
	void		printContact(void);
	int			setContact(void);
	
	std::string		firstName;
	std::string		lastName;
	std::string		nickname;
	std::string		postalAddress;
	std::string		emailAddress;
	std::string		phoneNumber;
	std::string		birthdayDate;
	std::string		favoriteMeal;
	std::string		underwearColor;
	std::string		darkestSecret;
	std::string		login;

private:
	static int 		_nbContact;
	bool		 	_isSet;
	

};

#endif
