/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcallet <axcallet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 09:29:48 by axcallet          #+#    #+#             */
/*   Updated: 2023/12/06 16:25:54 by axcallet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#define _END		"\033[0m"
#define _BLUE		"\033[0;34m"

#include <iostream>

template <typename T>
void	iter(T *array, int len, void (*f)(T &)) {
	for (int i = 0; i < len; i++)
		f(array[i]);
	return ;
}

template <typename T>
void	iter(const T *array, int len, void (*f)(T const &)) {
	for (int i = 0; i < len; i++)
		f(array[i]);
	return ;
}

template <typename T>
void	diplayElements(T &element) {
	std::cout << element << std::endl;
	return ;
}