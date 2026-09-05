/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 16:35:21 by asauvage          #+#    #+#             */
/*   Updated: 2026/09/05 16:57:51 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(): name_("Default"), grade_sign_(1), grade_execute_(1), signed_(0) {
	return ;
}

Form::Form( const std::string& name, int grade_sign, int grade_execute): name_(name), grade_sign_(grade_sign), grade_execute_(grade_execute), signed_(0) {
	if (grade_sign_ < 1 || grade_execute_ < 1)
		throw	Form::GradeTooHighException();
	if (grade_sign_ > 150 || grade_execute_ > 150)
		throw	Form::GradeTooLowException();
	return ;
}

Form::Form( const Form& obj ):name_(obj.name_), grade_sign_(1), grade_execute_(1), signed_(obj.signed_) {
	return ;
}

Form&	Form::operator=( const Form& obj ) {
	signed_ = obj.signed_;
	return *this;
}

Form::~Form() {
	return ;
}

std::string	Form::getName() const {
	return name_;
}

int	Form::getSign() const {
	return grade_sign_;
}

int	Form::getExecute() const {
	return	grade_execute_;
}

bool	Form::getSigned() const {
	return grade_execute_;
}

void	Form::beSigned( const Bureaucrat& status ) {
	if (status.getGrade() <= getSign())
		signed_ = true;
	else
		throw	Form::GradeTooLowException();
}

std::ostream&	operator<<( std::ostream& out, const Form& rhs ) {
	out << "The " << rhs.getName() << " grade to sign is " << rhs.getSign() << " and to execute is " << rhs.getExecute() << "\n";
	if (rhs.getSigned() == true)
		out << "And is signed\n";
	else
		out << "And not signed\n";
	return out;
}
