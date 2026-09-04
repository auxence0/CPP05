/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 17:03:18 by asauvage          #+#    #+#             */
/*   Updated: 2026/09/04 16:55:29 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"

int	main() {
	try {
		Intern someRandomIntern;
		AForm* rrf;
		
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		std::cout << rrf->getName() << "\n";
	}
	catch (std::exception& e) {
		std::cerr << e.what();
	}
	try {
		Intern someRandomIntern;
		AForm* rrf;
		
		rrf = someRandomIntern.makeForm("presidential pardon", "cafard");
		std::cout << rrf->getName() << "\n";
	}
	catch (std::exception& e) {
		std::cerr << e.what();
	}
	try {
		Intern someRandomIntern;
		AForm* rrf;
		
		rrf = someRandomIntern.makeForm("shrubbery creation", "tartantule");
		std::cout << rrf->getName() << "\n";
	}
	catch (std::exception& e) {
		std::cerr << e.what();
	}
	try {
		Intern someRandomIntern;
		AForm* rrf;
		
		rrf = someRandomIntern.makeForm("dsa request", "Bender");
		std::cout << rrf->getName() << "\n";
	}
	catch (std::exception& e) {
		std::cerr << e.what();
	}
}
