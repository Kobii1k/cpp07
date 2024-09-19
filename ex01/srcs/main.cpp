/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagne <mgagne@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 17:27:35 by mgagne            #+#    #+#             */
/*   Updated: 2024/07/31 17:11:30 by mgagne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void	print_c(char c)
{
	std::cout << c << ' ';
}

void	print_int(int i)
{
	std::cout << i << ' ';
}

int		incr_int(int &i)
{
	std::cout << "+ ";
	i++;
	return (i);
}

int		decr_int(int &i)
{
	std::cout << "- ";
	i--;
	return (i);
}

void	incr_c(char  &c)
{
	std::cout << "+ ";
	c += 1;
}

void	decr_c(char  &c)
{
    std::cout << "- ";
	c -= 1;
}

int	main()
{
	int		ints[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	char	chars[6] = {'A', 'B', 'C', 'X', 'Y', 'Z' };

	::iter(ints, 10, &print_int);
	std::cout << std::endl;
	std::cout << std::endl;
	::iter(ints, 10, &incr_int);
	std::cout << std::endl;
	::iter(ints, 10, &print_int);
	std::cout << std::endl;
	std::cout << std::endl;
	::iter(ints, 10, &decr_int);
	std::cout << std::endl;
	::iter(ints, 10, &print_int);
	std::cout << std::endl;

	std::cout << "____________________________" << std::endl;
	std::cout << std::endl;

	::iter(chars, 6, &print_c);
	std::cout << std::endl;
	std::cout << std::endl;
	::iter(chars, 6, &incr_c);
	std::cout << std::endl;
	::iter(chars, 6, &print_c);
	std::cout << std::endl;
	std::cout << std::endl;
	::iter(chars, 6, &decr_c);
	std::cout << std::endl;
	::iter(chars, 6, &print_c);
	std::cout << std::endl;
	return (0);
}
