/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagne <mgagne@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 17:33:34 by mgagne            #+#    #+#             */
/*   Updated: 2024/07/31 16:35:13 by mgagne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
	#define WHATEVER_HPP

	#include "whatever.h"

	template<typename T>
	T	const &min(T const &x, T const &y)
	{
		if (x <= y)
			return (x);
		else
			return (y);
	}

	template<typename T>
	T	const &max(T const &x, T const &y)
	{
		if (y <= x)
			return (x);
		else
			return (y);
	}

	template<typename T>
	void	swap(T &x, T &y)
	{
		T	temp;

		temp = x;
		x = y;
		y = temp;
	}

#endif
