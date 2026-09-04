/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 16:17:20 by asauvage          #+#    #+#             */
/*   Updated: 2026/09/03 17:52:47 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(): name_("Default"), grade_sign_(1), grade_execute_(1), signed_(0) {
	return ;
}

AForm::AForm( std::string name, int grade_sign, int grade_execute): name_(name), grade_sign_(grade_sign), grade_execute_(grade_execute), signed_(0) {
	if (grade_sign_ < 1 || grade_execute_ < 1)
		throw	AForm::GradeTooHighException();
	if (grade_sign_ > 150 || grade_execute_ > 150)
		throw	AForm::GradeTooLowException();
	return ;
}

AForm::AForm( const AForm& obj ):name_(obj.name_), grade_sign_(1), grade_execute_(1), signed_(obj.signed_) {
	return ;
}

AForm&	AForm::operator=( const AForm& obj ) {
	signed_ = obj.signed_;
	return *this;
}

AForm::~AForm() {
	return ;
}

std::string	AForm::getName() const {
	return name_;
}

int	AForm::getSign() const {
	return grade_sign_;
}

int	AForm::getExecute() const {
	return	grade_execute_;
}

bool	AForm::getSigned() const {
	return signed_;
}

void	AForm::beSigned( const Bureaucrat& status ) {
	if (status.getGrade() <= getSign())
		signed_ = true;
	else
		throw	AForm::GradeTooLowException();
}

void	AForm::execution( Bureaucrat const & executor ) const {
	if (getSigned() == false)
		throw	AForm::NotSigned();
	if (getExecute() < executor.getGrade())
		throw	AForm::GradeExecTooLow();
}

std::ostream&	operator<<( std::ostream& out, const AForm& rhs ) {
	out << "The " << rhs.getName() << " grade to sign is " << rhs.getSign() << " and to execute is " << rhs.getExecute() << "\n";
	if (rhs.getSigned() == true)
		out << "And is signed\n";
	else
		out << "And not signed\n";
	return out;
}
