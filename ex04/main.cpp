/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 09:24:07 by mmarcott          #+#    #+#             */
/*   Updated: 2023/12/20 09:24:07 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv) {
	if (argc != 4) {
		std::cout << "Wrong number of arguments!" << std::endl;
		return 1;
	}
	return 0;
}
