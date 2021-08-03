/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhee <rhee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 21:42:23 by rhee              #+#    #+#             */
/*   Updated: 2021/08/03 23:14:46 by rhee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

static int get_info(Contact list[8], int *cnt)
{
    int idx;
    std::string input;

    idx = *cnt % 8;
    std::cout << "First name: ";
	getline(std::cin, input);
	list[idx].set_firstname(input);
	std::cout << "Last name: ";
	getline(std::cin, input);
	list[idx].set_lastname(input);
	std::cout << "Nickname: ";
	getline(std::cin, input);
	list[idx].set_nickname(input);
    std::cout << "Phone number: ";
	getline(std::cin, input);
	list[idx].set_phonenumber(input);
	std::cout << "Darkest Secret: ";
	getline(std::cin, input);
	list[idx].set_darkestsecret(input);
    *cnt += 1;
    return (0);
}

static int search_info(Contact book[8], int cnt)
{
    int		idx;
    int     i;
    
    i = -1;
    if (cnt > 8)
        cnt = 8;
    if (cnt == 0)
        std::cout << "Phone book is empty, you should add first then search :)" << std::endl;
    else
    {
       
        while (++i < cnt)
            book[i].print_default(i+1);
        std::cout << "Let me know the index of the info you want to know : ";
        while (!(std::cin >> idx) || idx < 1 || idx > cnt)
        {
            std::cout << "Enter valid index: ";
            std::cin.clear();
            std::cin.ignore(100,'\n');
        }
        book[idx - 1].print_info();
        std::cin.clear();
        std::cin.ignore(100,'\n');
    }
    return (0);
}

int main()
{
    std::string input;
    Contact book[8];
    int cnt;

    std::cout << "Hi this is phonebook program I just coded!\nEnter ADD or SEARCH or EXIT plz!" << std::endl;
    cnt = 0;
    while (1)
    {
        std::cout << ">> ";
        getline(std::cin, input);
        if (input == "ADD")
            get_info(book, &cnt);
        else if (input == "SEARCH")
            search_info(book, cnt);
        else if (input == "EXIT")
            break;
    }
    std::cout << "You just terminated program!" << std::endl;
    return (0);
}