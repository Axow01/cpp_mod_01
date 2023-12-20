/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 09:24:07 by mmarcott          #+#    #+#             */
/*   Updated: 2023/12/20 13:53:12 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

static void createNewString(std::string &originString, char *s1, char *s2) {
	size_t i = 0;
	size_t s1Length = strlen(s1);

	while ((i = originString.find(s1, i)) != std::string::npos) {
		originString.erase(i, s1Length);
		originString.insert(i, s2);
		i += strlen(s2);
	}
}

static void	createNewFile(std::string newFilename, std::string &originString) {
	std::ofstream	newFile;

	newFile.open(newFilename, std::fstream::out);
	if (newFile.rdstate() != std::ios::goodbit) {
		std::cerr << "Something went wrong with the new file." << std::endl;
		newFile.close();
		return;
	}
	newFile << originString;
	newFile.close();
}

int	main(int argc, char **argv) {
	std::ifstream	originFile;
	std::string		originString;
	std::string		newFilename;

	if (argc != 4) {
		std::cout << "Wrong number of arguments!" << std::endl;
		return 1;
	}
	originFile.open(argv[1], std::ifstream::in);
	newFilename = argv[1];
	newFilename += ".replace";
	if (originFile.rdstate() != std::ios::goodbit) {
		std::cerr << "Something went wrong while opening the file." << std::endl;
		originFile.close();
		return 1;
	}
	while (originFile.good()) {
		char	c = originFile.get();
		if (c >= 0)
			originString += c;
	}
	originFile.close();
	createNewString(originString, argv[2], argv[3]);
	createNewFile(newFilename, originString);
	return 0;
}
