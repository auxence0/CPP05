/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 16:19:25 by asauvage          #+#    #+#             */
/*   Updated: 2026/09/01 17:20:59 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iostream>

class	Bureaucrat;

class	Form {
	public:
		Form();
		Form( std::string name, int grade_sign, int grade_execute );
		Form( const Form& obj );
		~Form();
		Form& operator=( const Form& rhs );
		std::string			getName() const ;
		int					getSign() const ;
		int					getExecute() const ;
		bool				getSigned() const ;
		void				beSigned( const Bureaucrat& status );
	private:
		const std::string	name_;
		const int			grade_sign_;
		const int			grade_execute_;
		bool				signed_;

	class	GradeTooHighException: public std::exception {
		public:
			virtual const char*	what() const throw() {
				return ("Grade is too high\n");
			}
	};
	class	GradeTooLowException: public std::exception {
		public:
			virtual const char * what() const throw() {
				return ("Grade is too low\n");
			}
	};
};

std::ostream&	operator<<( std::ostream& out, const Form& rhs );

#endif