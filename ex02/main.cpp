/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 15:46:17 by mmarcott          #+#    #+#             */
/*   Updated: 2023/12/19 15:57:45 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void) {
	std::string	str("HI THIS IS BRAIN");
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "str address: " << &str << std::endl;
	std::cout << "stringPTR held address: " << stringPTR << std::endl;
	std::cout << "stringREF held address: " << &stringREF << std::endl;
	std::cout << "str value: " << str << std::endl;
	std::cout << "stringPTR pointed value: " << *stringPTR << std::endl;
	std::cout << "stringREF pointed value: " << stringREF << std::endl;
	return 0;
}
