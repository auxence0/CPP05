/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/31 14:35:53 by asauvage          #+#    #+#             */
/*   Updated: 2026/09/05 17:02:41 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

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
		boss.beSigned(X);
	}
	catch(std::exception& e) {
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
