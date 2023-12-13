/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcallet <axcallet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 10:09:43 by axcallet          #+#    #+#             */
/*   Updated: 2023/11/30 14:48:56 by axcallet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#define _END		"\033[0m"
#define _BLACK		"\033[0;30m"
#define _RED		"\033[0;31m"
#define _GREEN		"\033[0;32m"
#define _YELLOW		"\033[0;33m"
#define _BLUE		"\033[0;34m"
#define _PURPLE		"\033[0;35m"
#define _CYAN		"\033[0;36m"

#include <iostream>

template <class T>
class	Array {
	
	private:
		T				*_array;
		unsigned int	_size;

	public:
	// Constructors
		Array(void) : _array(new T[0]), _size(0) {};

		Array(unsigned int n) : _array(new T[n]), _size(n) {
			for (unsigned int i = 0; i < _size; i++)
				this->_array[i] = T();
		};

		Array(const Array &toCopy) {
			this->_array = new T[toCopy.size()];
			this->_size = toCopy.size();
			for (unsigned int i = 0; i < toCopy.size(); i++)
				this->_array[i] = toCopy._array[i];
		};

	// Destructor
		~Array(void) {delete []_array;};

	// Overload operator
		Array &operator=(const Array &toCopy) {
			if (this == &toCopy)
				return (*this);
			delete [] _array;
			this->_array = new T[toCopy.size()];
			this->_size = toCopy.size();
			for (unsigned int i = 0; i < toCopy.size(); i++)
				this->_array[i] = toCopy._array[i];
			return (*this);
		};

		T	&operator[](unsigned int i) {
			if (i >= _size)
				throw OutOfBoundsExecpetion();
			return (_array[i]);
		}

	// Public method
		unsigned int	size(void) const{
			return (_size);
		};

	// Execption
		class	OutOfBoundsExecpetion : public std::exception {	
				virtual const char	*what(void) const throw() {return "Index out of bounds";}
		};
};
