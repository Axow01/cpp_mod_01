/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 17:00:20 by mmarcott          #+#    #+#             */
/*   Updated: 2023/12/19 17:18:30 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int	main(void) {
	{
		Weapon	club = Weapon("crude spiked club");
		HumanA	bob("Bob", club);

		bob.attack();
		club.setType("rusted machette");
		bob.attack();
	}
	{
		Weapon	club = Weapon("crude spiked club");
		HumanB	jean("Jean");

		jean.setWeapon(club);
		jean.attack();
		club.setType("golden machette");
		jean.attack();
	}
	{
		HumanB	roger("Roger");
		Weapon	stick("Huge stick ;)");
		
		roger.attack();
		roger.setWeapon(stick);
		roger.attack();
		stick.setType("knife");
		roger.attack();
	}
	return 0;
}
