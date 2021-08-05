/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Book.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhee <rhee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 21:42:23 by rhee              #+#    #+#             */
/*   Updated: 2021/08/05 16:02:04 by rhee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Book.hpp"

void	Book::command(void)
{
	std::string input;
	
	std::cout << ">> ";
	if (getline(std::cin, input).eof())
		exit(1);
	if (input == "ADD")
		get_info();
	else if (input == "SEARCH")
		search_info();
	else if (input == "EXIT")
		cmd_exit();
}

void	Book::get_info(void)
{
    int idx;
    std::string input;

    idx = cnt % 8;
    std::cout << "First name: ";
	if (getline(std::cin, input).eof())
		exit(1);
	PhoneBook[idx].set_firstname(input);
	std::cout << "Last name: ";
	if (getline(std::cin, input).eof())
		exit(1);
	PhoneBook[idx].set_lastname(input);
	std::cout << "Nickname: ";
	if (getline(std::cin, input).eof())
		exit(1);
	PhoneBook[idx].set_nickname(input);
    std::cout << "Phone number: ";
	if (getline(std::cin, input).eof())
		exit(1);
	PhoneBook[idx].set_phonenumber(input);
	std::cout << "Darkest Secret: ";
	if (getline(std::cin, input).eof())
		exit(1);
	PhoneBook[idx].set_darkestsecret(input);
    cnt += 1;
}

void	Book::search_info(void)
{
    int		idx;
	int		count;
    int     i;
    
	count = cnt;
    i = -1;
    if (count > 8)
        count = 8;
    if (count == 0)
        std::cout << "Phone book is empty, you should add first then search :)" << std::endl;
    else
    {
       
        while (++i < count)
            PhoneBook[i].print_default(i+1);
        std::cout << "Let me know the index of the info you want to know : ";
		if ((std::cin >> idx).eof())
			exit(1);
		else{
			while (!idx || idx < 1 || idx > count)
			{
				std::cout << "Enter valid index: ";
				std::cin.clear();
				std::cin.ignore(100,'\n');
				if((std::cin >> idx).eof())
					exit(1);
			}
			PhoneBook[idx - 1].print_info();
			std::cin.clear();
			std::cin.ignore(100,'\n');
		}
    }
}

void	Book::cmd_exit(void)
{
	std::cout << "You just terminated program!" << std::endl;
	exit(1);
}