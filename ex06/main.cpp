/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 14:28:57 by mmarcott          #+#    #+#             */
/*   Updated: 2024/01/06 15:41:13 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv) {
	Harl		harl;
	int			argvBuff = 4;
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	if (argc != 2) {
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		return 0;
	}
	for (int i = 0; i < 4; i++) {
		if (levels[i] == argv[1]) {
			argvBuff = i;
			break;
		}
	}
	switch (argvBuff) {
	case 0:
		harl.complain("DEBUG");
	case 1:
		harl.complain("INFO");
	case 2:
		harl.complain("WARNING");
	case 3:
		harl.complain("ERROR");
		break;
	case 4:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	return 0;
}
