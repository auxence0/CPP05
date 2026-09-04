/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 13:37:23 by asauvage          #+#    #+#             */
/*   Updated: 2026/09/03 14:10:25 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

class	PresidentialPardonForm: public AForm {
	public:
		PresidentialPardonForm();
		PresidentialPardonForm( const std::string& target );
		PresidentialPardonForm( const PresidentialPardonForm& obj );
		PresidentialPardonForm&	operator=( const PresidentialPardonForm& rhs );
		~PresidentialPardonForm();
		virtual void			execute( Bureaucrat const & executor ) const;
	private:
		std::string	target_;
};

#endif