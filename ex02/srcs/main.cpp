/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagne <mgagne@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 17:27:35 by mgagne            #+#    #+#             */
/*   Updated: 2024/09/24 22:02:16 by mgagne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#define MAX_VAL 5

int	main()
{
	const Array<int> a(MAX_VAL);
	Array<int> b;

	try
	{
		for (int i = 0; i < MAX_VAL; i++)
		{
			std::cout << a[i] << " -> ";
			a[i] = i;
			std::cout << a[i] << std::endl;
		}
	}
	catch (std::exception &err)
	{ std::cerr << err.what() << std::endl; }

	std::cout << std::endl;

	try
	{
		// std::cout << b[1] << std::endl;
		b = a;
		b[MAX_VAL/2] = 99;
		for (int i = 0; i < MAX_VAL; i++)
		{
			std::cout << b[i] << std::endl;
		}
	}
	catch (std::exception &err)
	{ std::cerr << err.what() << std::endl; }

	std::cout << std::endl;
	return (0);
}
