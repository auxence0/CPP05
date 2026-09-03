/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/31 14:35:53 by asauvage          #+#    #+#             */
/*   Updated: 2026/09/03 12:28:43 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main() {
	try {
		Bureaucrat	rat("auxence", -3);
	}
	catch (std::exception& e) {
		std::cerr << e.what();
	}

	try {
		Bureaucrat	souris("t mauvais le s", 151);
	}
	catch (std::exception& e) {
		std::cerr << e.what();
	}

	try {
		Bureaucrat	macaron("pas mal", 1);
		std::cout << macaron.getName() << " is " << macaron.getGrade() << "\n";
		macaron.decrement();
		macaron.increment();
		macaron.increment();
	}
	catch (std::exception& e) {
		std::cerr << e.what();
	}

	try {
		Form	platon("Former", 14, -2);
	}
	catch (std::exception& e) {
		std::cerr << e.what();
	}
	
	try {
		Form	Aristote("level up", 212, 2);
	}
	catch (std::exception& e) {
		std::cerr << e.what();
	}

	try {
		Form	boss("Finance", 15, 5);
		Bureaucrat	X("Jean", 16);
		Bureaucrat	Y("Rachelle", 2);
		X.signForm(boss);
		Y.signForm(boss);
	}
	catch(std::exception& e) {
		std::cerr << e.what();
	}
}
