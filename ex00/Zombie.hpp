/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 13:07:15 by mmarcott          #+#    #+#             */
/*   Updated: 2023/12/19 13:33:34 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie {
	public:
		Zombie(void);
		Zombie(std::string name);
		~Zombie(void);
		void	announce(void);
	private:
		std::string _name;
};

/// @brief Create a new zombie, that can be used outside of this function scope.
/// @param name 
/// @return Zombie*
Zombie*	newZombie(std::string name);

/// @brief Create a zombie and announce itself.
/// @param name 
void	randomChump(std::string name);

#endif
