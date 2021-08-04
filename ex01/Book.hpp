/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Book.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhee <rhee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 21:42:23 by rhee              #+#    #+#             */
/*   Updated: 2021/08/04 15:22:57 by rhee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BOOK_HPP
# define BOOK_HPP

# include "Contact.hpp"

class Book
{
private:
    int cnt;
    Contact PhoneBook[8];
public:
    Book()
    {
        std::cout << "Hi this is phonebook program I just coded!\nEnter ADD or SEARCH or EXIT plz!" << std::endl;
        cnt = 0;
    }
    void command(void);
    void get_info(void);
    void search_info(void);
    void cmd_exit(void);
};

#endif