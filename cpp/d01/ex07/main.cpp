/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 17:18:53 by djoly             #+#    #+#             */
/*   Updated: 2017/10/04 10:10:46 by djoly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

int		main(int ac, char **av){
	std::string		line;
	std::string		newLine;
	std::ofstream	newFile;
	std::ifstream 	ifs;
	int				pos;

	if (ac < 4){
		std::cout << "missing args" << std::endl;
		return 1;
	}
	ifs.open(std::string(av[1]));
	if (!ifs.is_open()){
		std::cout << "file not open " << std::string(av[1]) << std::endl;
		return 1;
	}
	newFile.open(std::string(av[1]) + ".replace" );
	if (!newFile.is_open()){
		std::cout << "file not open " << std::string(av[1]) << ".replace" << std::endl;
		ifs.close();
		return 1;
	}
	if(std::string(av[3]).find(std::string(av[2])) != std::string::npos){
		std::cout << "src in replace" << std::endl;
		return 1;
	}
	
	while(getline(ifs, line)){
		newLine = line;
		while(newLine.find(std::string(av[2])) != std::string::npos){
			pos = newLine.find(std::string(av[2]));
			std::cout << newLine << std::endl;
			newLine = newLine.replace(pos, std::string(av[2]).size(), std::string(av[3]));
			std::cout << std::to_string(pos) << "position " << std::endl;
			std::cout << newLine << std::endl;
		}
		newFile << newLine << std::endl;
	}
	ifs.close();
	newFile.close();


	return 0;
}
