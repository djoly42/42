/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 10:43:56 by djoly             #+#    #+#             */
/*   Updated: 2017/10/02 15:32:02 by djoly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"
#include <iostream>

Contact::Contact(void){

	return;
}

Contact::~Contact(void){


	return;
}
void Contact::printContact(void){

	std::cout << "---- CONTACT ----\n";
	std::cout << "first name: " + this->firstName + "\n";
	std::cout << "last name: " + this->lastName + "\n" ;
	std::cout << "nickname: " + this->nickname + "\n";
	std::cout << "postal address: " + this->postalAddress + "\n";
	std::cout << "email address: " + this->emailAddress + "\n";
	std::cout << "phone number: " + this->phoneNumber + "\n";
	std::cout << "birthday date: " + this->birthdayDate + "\n";
	std::cout << "favorite meal: " + this->favoriteMeal + "\n";
	std::cout << "underwear color: " + this->underwearColor + "\n";
	std::cout << "darkest secret: " + this->darkestSecret + "\n";
	std::cout << "login: " + this->login + "\n";
	std::cout << "----------------\n";

}

int Contact::setContact(void){
	std::cout << "first name: ";
	std::getline(std::cin, this->firstName);
	std::cout << "last name: ";
	std::getline(std::cin, this->lastName);
	std::cout << "nickname: ";
	std::getline(std::cin, this->nickname);
	std::cout << "postal address: ";
	std::getline(std::cin, this->postalAddress);
	std::cout << "email address: ";
	std::getline(std::cin, this->emailAddress);
	std::cout << "phone number: ";
	std::getline(std::cin, this->phoneNumber);
	std::cout << "birthday date: ";
	std::getline(std::cin, this->birthdayDate);
	std::cout << "favorite meal: ";
	std::getline(std::cin, this->favoriteMeal);
	std::cout << "underwear color: ";
	std::getline(std::cin, this->underwearColor);
	std::cout << "darkest secret: ";
	std::getline(std::cin, this->darkestSecret);
	std::cout << "login :";
	std::getline(std::cin, this->login);
	this->_isSet = true;
	return 0;
}

bool	Contact::get_isSet(){
	return this->_isSet;
}

int		Contact::getNbContact(void){

	return Contact::_nbContact;
}

int		Contact::_nbContact = 0;
