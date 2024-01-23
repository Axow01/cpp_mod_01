/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 14:02:31 by mmarcott          #+#    #+#             */
/*   Updated: 2024/01/23 16:27:14 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {
	Zombie zOne("Jean");
	Zombie *zTwo = newZombie("Bob");

	if (!zTwo)
		return 1;
	randomChump("Robert");
	zOne.announce();
	zTwo->announce();
	
	delete zTwo;
	return 0;
}
