/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 13:05:56 by asauvage          #+#    #+#             */
/*   Updated: 2026/09/03 16:23:58 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <string>
# include <iostream>

class	Bureaucrat;

class	AForm {
	public:
		AForm();
		AForm( std::string name, int grade_sign, int grade_execute );
		AForm( const AForm& obj );
		~AForm();
		AForm& operator=( const AForm& rhs );
		std::string			getName() const;
		int					getSign() const ;
		int					getExecute() const ;
		bool				getSigned() const ;
		void				beSigned( const Bureaucrat& status );
		virtual void		execute( Bureaucrat const & executor ) const = 0;
		void				execution( Bureaucrat const & executor ) const;
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
	class	NotSigned: public std::exception {
		public:
			virtual const char* what() const throw() {
				return ("Form is not signed\n");
			}
	};
	class	GradeExecTooLow: public std::exception {
		public:
			virtual const char* what() const throw() {
				return ("The grade for the execution of the Form is too low\n");
			}
	};
};

#endif