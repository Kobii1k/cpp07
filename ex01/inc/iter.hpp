/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagne <mgagne@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 17:33:34 by mgagne            #+#    #+#             */
/*   Updated: 2024/07/31 16:57:19 by mgagne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
	#define ITER_HPP

	#include "iter.h"

	template<typename A, typename L, typename F>
	void	iter(A *array, L len, F fun)
	{
        for (L i = 0; i < len; i++)
            (fun)(array[i]);
	}

#endif
