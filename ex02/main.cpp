/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcallet <axcallet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 14:06:18 by axcallet          #+#    #+#             */
/*   Updated: 2023/11/30 14:51:13 by axcallet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main(void) {
	{
		std::cout << _BLUE << "\n### TEST WITH INT ###\n" << _END << std::endl;
		try {
			Array<int>	arrayInt(10);

			std::cout << "The size of this array is: " << arrayInt.size() << std::endl; 
			std::cout << std::endl;
			arrayInt[0] = 42;
			std::cout << arrayInt[0] << std::endl;
			// arrayInt[-64] = 69;
			// std::cout << arrayInt[69] << std::endl;
			// arrayInt[256] = 12;
			// std::cout << arrayInt[256] << std::endl;
		}
		catch (std::exception &exep) {
			std::cerr << _RED << exep.what() << _END << std::endl;
		}
	}
	{
		std::cout << _BLUE << "\n### TEST WITH CHAR ###\n" << _END << std::endl;
		try {
			Array<char>	arrayChar(6);

			std::cout << "The size of this array is: " << arrayChar.size() << std::endl; 
			std::cout << std::endl;
			arrayChar[2] = 'A';
			std::cout << arrayChar[2] << std::endl;
			// arrayChar[-64] = 'o';
			// std::cout << arrayChar[-64] << std::endl;
			// arrayChar[256] = 'Y';
			// std::cout << arrayChar[256] << std::endl;
		}
		catch (std::exception &exep) {
			std::cerr << _RED << exep.what() << _END << std::endl;
		}
	}
	{
		std::cout << _BLUE << "\n### TEST WITH COPY ###\n" << _END << std::endl;
		try {
			Array<int>	arrayInt(3);

			std::cout << "The size of this array is: " << arrayInt.size() << std::endl;
			std::cout << std::endl;
			arrayInt[0] = 42;
			arrayInt[1] = 69;
			arrayInt[2] = 12;
			
			std::cout << arrayInt[0] << std::endl;
			std::cout << arrayInt[1] << std::endl;
			std::cout << arrayInt[2] << std::endl;
			std::cout << std::endl;
			
			Array<int>	copy(arrayInt);

			std::cout << "The size of this array is: " << copy.size() << std::endl;
			std::cout << std::endl;
			std::cout << copy[0] << std::endl;
			std::cout << copy[1] << std::endl;
			std::cout << copy[2] << std::endl;

		}
		catch (std::exception &exep) {
			std::cerr << _RED << exep.what() << _END << std::endl;
		}
	}
}
