/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 14:02:31 by mmarcott          #+#    #+#             */
/*   Updated: 2023/12/19 15:37:21 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {
	size_t	sizeZombieArraySuperCool = 10;
	Zombie *monArraySuperCool = zombieHorde(sizeZombieArraySuperCool, "Les Bobs");

	for (size_t i = 0; i < sizeZombieArraySuperCool; i++)
		monArraySuperCool[i].announce();
	delete[] monArraySuperCool;
	return 0;
}
