/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 10:34:52 by djoly             #+#    #+#             */
/*   Updated: 2017/10/02 15:45:41 by djoly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<iostream>
#include	"Contact.class.hpp"
#include	"header.hpp"

std::string	ft_setTmp(std::string field){
	std::string	tmp;

	tmp = "          ";
	if(field.size() > 10){
		tmp = field.substr(0, 9) + ".";
	}
	else{
		tmp = tmp.replace(10 - field.size() , field.size() , field);
	}
	return tmp;
}

void	ft_setLine(Contact contact, Line *lin,int j){
	lin[j].current = contact;
	lin[j].index = j;
	lin[j].firstName =ft_setTmp(contact.firstName);
	lin[j].lastName =ft_setTmp(contact.lastName) ;
	lin[j].nickname =ft_setTmp(contact.nickname) ;
	return ;
}

bool	is_number(std::string str){
		std::string::const_iterator it = str.begin();
	    while (it != str.end() && std::isdigit(*it))
			++it;
		return !str.empty() && it == str.end();
}

void	ft_search(Contact *book){
	int				i;
	int				j;
	std::string		choice;
	Line			lin[8];

	i = 0;
	j = 0;
	while(i < 8){
		if (book[i].get_isSet()){
			ft_setLine(book[i], lin, j);
			j++;
		}
		i++;
	}
	if (j == 0){
		std::cout << "no contact find\n";
	   	return;	
	}
	i = 0;
	while(i < j){
		std::cout << "         " + std::to_string(lin[i].index) + "|" + lin[i].firstName + "|" +lin[i].lastName	+ "|" + lin[i].nickname + "|\n";
		i++;
	}
	std::cout << "index of the desired entry:\n";
	std::getline(std::cin, choice);

	if (is_number(choice) && std::stoi(choice) >= 0  && std::stoi(choice) < j){
		lin[std::stoi(choice)].current.printContact(); 
	}
	else
		std::cout << "out of range\n"; 
	return;
}


int		main(void){
	std::string input;
	Contact		book[8];
	int			i;

	std::cout << "command (ADD SEARCH EXIT) :";
	while(std::getline(std::cin, input)){
		if(input.compare("ADD") == 0){
			std::cout << "in ADD\n";
			if (Contact::getNbContact() == 8)
				std::cout << "max contact achieved\n";
			else{
				std::cout << "add contact\n";
				i = 0;
				while(i < 8){
					if(book[i].get_isSet() == false){

						book[i].setContact();
						//book[i].printContact();
						break;
					}
					i++;
				}
			}
		}
		else if(input.compare("EXIT") == 0){
			std::cout << "EXIT\n";
			return 0;	
		}
		else if(input.compare("SEARCH") == 0){
			ft_search(book);
		}
	std::cout << "command (ADD SEARCH EXIT) :";
	}

	return 0;
}
