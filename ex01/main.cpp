/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcallet <axcallet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 09:29:09 by axcallet          #+#    #+#             */
/*   Updated: 2023/11/30 15:14:17 by axcallet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main(void) {
	{
		std::cout << _BLUE << "\n### TEST WITH INT ###\n" << _END << std::endl;
		int	array[5] = {2, 6, 3, 8, 4};

		::iter(array, 5, diplayElements);
	}
	{
		std::cout << _BLUE << "\n### TEST WITH CHAR ###\n" << _END << std::endl;
		char	array[4][30] = {"lolilol", "eh oh", "pourquoi pas", "hexakosioihexekontahexaphobie"};

		::iter(array, 4, diplayElements);
	}
	return (0);
}