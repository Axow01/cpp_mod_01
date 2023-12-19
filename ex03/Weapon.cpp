/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 16:10:39 by mmarcott          #+#    #+#             */
/*   Updated: 2023/12/19 16:18:28 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void) {
}

Weapon::Weapon(std::string type) {
	_type = type;
}

Weapon::~Weapon(void) {
}

const std::string&	Weapon::getType(void) {
	return _type;
}

void	Weapon::setType(std::string type) {
	_type = type;
}
