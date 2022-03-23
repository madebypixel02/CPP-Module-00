/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <aperez-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 15:09:15 by aperez-b          #+#    #+#             */
/*   Updated: 2022/03/23 21:10:15 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Phonebook_utils.hpp"

Phonebook::Phonebook(void)
{
	this->_index = 0;
	std::cout << \
		"Welcome to Crappy! Created an empty phonebook for up to 8 contacts" \
		<< std::endl;
}

Phonebook::~Phonebook(void)
{
	std::cout << "See you soon!" << std::endl;
}

void	Phonebook::add(void)
{
	std::string	str;

	if (this->_index > 7)
		std::cout << "Warning: overwriting info about " << \
			this->_contacts[this->_index % 8].get_fname() << std::endl;
	std::cout << "Enter a first name: ";
	std::cin >> str;
	this->_contacts[this->_index % 8].set_fname(str);
	std::cout << "Enter " << \
		this->_contacts[this->_index % 8].get_fname() << "'s last name: ";
	std::cin >> str;
	this->_contacts[this->_index % 8].set_lname(str);
	std::cout << "Enter " << \
		this->_contacts[this->_index % 8].get_fname() << "'s nickname: ";
	std::cin >> str;
	this->_contacts[this->_index % 8].set_nick(str);
	std::cout << "Enter " << \
		this->_contacts[this->_index % 8].get_fname() << "'s phone number: ";
	std::cin >> str;
	this->_contacts[this->_index % 8].set_phone_num(str);
	std::cout << "Enter " << \
		this->_contacts[this->_index % 8].get_fname() << "'s darkest secret: ";
	std::cin >> str;
	this->_contacts[this->_index % 8].set_secret(str);
	std::cout << this->_contacts[this->_index % 8].get_fname() << \
		" successfully added to phonebook [" << this->_index % 8 + 1 << "/8]" << std::endl;
	this->_index++;
}

void	Phonebook::print(Contact contact)
{
	std::cout << std::endl << "Requesting contact information..." << std::endl;
	if (!contact.get_fname().size())
	{
		std::cout << "Failed to get info for this contact" << std::endl;
		return ;
	}
	std::cout << "First Name: " << contact.get_fname() << std::endl;
	std::cout << "Last Name: " << contact.get_lname() << std::endl;
	std::cout << "Nickname: " << contact.get_nick() << std::endl;
	std::cout << "Phone Number: " << contact.get_phone_num() << std::endl;
	std::cout << "Darkest Secret: " << contact.get_secret() << std::endl;
}

Contact	Phonebook::get_contact(int index)
{
	return (this->_contacts[index % 8]);
}

void	Phonebook::search(void)
{
	std::string	str;
	char		i;

	i = search_ui(this->_contacts);
	while (i)
	{
		std::cout << "Select an index: ";
		std::cin >> str;
		if (str.size() == 1 && str[0] >= '1' && str[0] <= '8' && \
			this->_contacts[str[0] - 1 - '0'].get_fname().size())
			break ;
		std::cout << "Invalid index!" << std::endl;
	}
	if (i)
		this->print(this->_contacts[str[0] - 1 - '0']);
	else
		std::cout << std::endl << "Phonebook is empty!" << std::endl;
}
