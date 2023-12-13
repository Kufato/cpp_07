/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcallet <axcallet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:25:24 by axcallet          #+#    #+#             */
/*   Updated: 2023/11/29 11:42:58 by axcallet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#define _END	"\033[0m"
#define _BLUE	"\033[0;34m"

template <typename T>
void	swap(T &a, T &b) {
	T	tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
const T	min(T &a, T &b) {
	if (a < b)
		return (a);
	return (b);
}

template <typename T>
const T	max(T &a, T &b) {
	if (a > b)
		return (a);
	return (b);
}