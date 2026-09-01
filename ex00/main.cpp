/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/31 14:35:53 by asauvage          #+#    #+#             */
/*   Updated: 2026/09/01 16:41:26 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


int	main() {
	try {
		Bureaucrat	rat("auxence", -3);
	}
	catch (std::exception& e) {
		std::cerr << e.what();
	}

	try {
		Bureaucrat	souris("hors range", 151);
	}
	catch (std::exception& e) {
		std::cerr << e.what();
	}

	try {
		Bureaucrat	macaron("Meilleur", 1);
		std::cout << macaron;
		macaron.decrement();
		macaron.increment();
		macaron.increment();
	}
	catch (std::exception& e) {
		std::cerr << e.what();
	}
}
