/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 14:26:51 by asauvage          #+#    #+#             */
/*   Updated: 2026/09/05 17:44:22 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ShrubberyCreationForm.hpp"
# include "Bureaucrat.hpp"
# include "fstream"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("Default ShrubberyCreationForm", 145, 137), target_("Default ShrubberyCreationForm") {
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( const std::string& target ): AForm(target, 145, 137), target_(target) {
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm& obj ): AForm(obj), target_(obj.target_) {
	return ;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=( const ShrubberyCreationForm& rhs ) {
	if (this != &rhs) {
		target_ = rhs.target_;
	}
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	return ;
}

void	ShrubberyCreationForm::execute( Bureaucrat const & executor ) const {
	execution(executor);
	std::string		file = target_ + "_shrubbery";
	std::ofstream	outfile(file.c_str());

	outfile << "      /\\      \n"
            << "     /\\*\\     \n"
            << "    /\\O\\*\\    \n"
            << "   /*/\\/\\/\\   \n"
            << "  /\\O\\/\\*\\/\\  \n"
            << "      ||      \n";
    outfile.close();
}
