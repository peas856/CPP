/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhee <rhee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 21:42:23 by rhee              #+#    #+#             */
/*   Updated: 2021/08/04 15:08:39 by rhee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Book.hpp"

void	Contact::set_firstname(const std::string first_name)
{
	this->first_name = first_name;
}

void	Contact::set_lastname(const std::string last_name)
{
	this->last_name = last_name;
}

void	Contact::set_nickname(const std::string nickname)
{
	this->nickname = nickname;
}

void	Contact::set_phonenumber(const std::string phone_number)
{
	this->phone_number = phone_number;
}

void    Contact::set_darkestsecret(const std::string darkest_secret)
{
	this->darkest_secret = darkest_secret;
}

std::string	Contact::edit_txt(std::string txt)
{
	if (txt.length() >= 10)
	{
		txt = txt.insert(9, ".");
		txt = txt.substr(0, 10);
	}
	return (txt);
}

void	Contact::print_default(int index)
{
	std::cout << std::setw(10) << std::right << index << "|";
	std::cout << std::setw(10) << std::right << edit_txt(first_name) << "|";
	std::cout << std::setw(10) << std::right << edit_txt(last_name) << "|";
	std::cout << std::setw(10) << std::right << edit_txt(nickname) << "|" << std::endl;
}

void	Contact::print_info()
{
	std::cout << "First name: " << this->first_name << std::endl;
	std::cout << "Last name: " << this->last_name << std::endl;
	std::cout << "Nickname: " << this->nickname << std::endl;
	std::cout << "Phone number: " << this->phone_number << std::endl;
	std::cout << "Darkest secret: " << this->darkest_secret << std::endl;
}
