/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 14:28:57 by mmarcott          #+#    #+#             */
/*   Updated: 2024/01/06 15:13:54 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void) {
	Harl harl;

	harl.complain("WARNING");
	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("ERROR");
	return 0;
}
