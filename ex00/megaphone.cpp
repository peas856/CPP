/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhee <rhee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 21:42:23 by rhee              #+#    #+#             */
/*   Updated: 2021/08/03 12:58:25 by rhee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char	ft_capitalize(char c)
{
	
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}

int		main(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else if (ac > 1)
	{
		while (i < ac)
		{
			j = 0;
			while (av[i][j])
				std::cout << ft_capitalize(av[i][j++]);
			i++;
		}
		std::cout << std::endl;
	}
	return (0);
}