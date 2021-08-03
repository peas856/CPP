/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhee <rhee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 21:42:23 by rhee              #+#    #+#             */
/*   Updated: 2021/08/03 23:08:59 by rhee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Contact
{
private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;

public:
    void    set_firstname(const std::string first_name);
    void    set_lastname(const std::string last_name);
    void    set_nickname(const std::string nickname);
    void    set_phonenumber(const std::string phone_number);
    void    set_darkestsecret(const std::string darkest_secret);

    void    print_info();
    void    print_default(int index);
    std::string edit_txt(std::string txt);
};

#endif