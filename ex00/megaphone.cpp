/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabuchhe <dabuchhe@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 21:25:12 by dabuchhe          #+#    #+#             */
/*   Updated: 2026/02/04 21:33:07 by dabuchhe         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <string.h>

int	main(int ac, char **av) {
	if (ac < 2) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (1);
	}
	for (int i = 1; i < ac; i++) {
		for (size_t j = 0; j < strlen(av[i]); j++)
			std::cout <<  (char)std::toupper(av[i][j]);
	}
	std:: cout << std::endl;
	return (0);
}
