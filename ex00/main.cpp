/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/31 14:35:53 by asauvage          #+#    #+#             */
/*   Updated: 2026/09/05 16:32:24 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


int	main() {
	try {
		Bureaucrat	me("me", -3);
	}
	catch (std::exception& e) {
		std::cerr << e.what();
	}

	try {
		Bureaucrat	lui("lui", 151);
	}
	catch (std::exception& e) {
		std::cerr << e.what();
	}

	try {
		Bureaucrat	Mr("Meilleur", 1);
		std::cout << Mr;
		Mr.decrement();
		Mr.increment();
		Mr.increment();
	}
	catch (std::exception& e) {
		std::cerr << e.what();
	}
}
