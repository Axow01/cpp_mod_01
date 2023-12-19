/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 13:36:00 by mmarcott          #+#    #+#             */
/*   Updated: 2023/12/19 14:44:50 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie(std::string name) {
	try {
		Zombie	*zonzon = new Zombie(name);
		return zonzon;
	} catch (std::bad_alloc &ba) {
		std::cerr << "Error bad_alloc caught: " << ba.what() << std::endl;
	}
	return NULL;
}
