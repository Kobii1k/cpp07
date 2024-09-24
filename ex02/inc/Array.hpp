/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagne <mgagne@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 17:33:34 by mgagne            #+#    #+#             */
/*   Updated: 2024/09/24 22:00:59 by mgagne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
	#define ARRAY_HPP

	#include "Array.h"

	template<typename T>
	class Array
	{
		public :
			Array<T>();
			~Array<T>();
			Array<T>(Array<T> const &copy);
			Array<T> &operator=(Array<T> const &right_value);

			Array<T>(const unsigned int n);
			T &operator[](unsigned int index);
			T &operator[](unsigned int index) const;

			std::size_t size() const;

		private :
			T *arr;
			unsigned int _size;

		class OutOfBoundException : public std::exception
		{
			public :
				virtual const char *what() const throw();
		};
	};

	template<typename T>
	Array<T>::Array()
	{
		this->_size = 0;
		this->arr = new T[0];
	}

	template<typename T>
	Array<T>::~Array()
	{
		if (this->arr)
			delete[] this->arr;
	}

	template<typename T>
	Array<T>::Array(Array<T> const &copy)
	{
		this->_size = copy._size;
		this->arr = new T[copy._size];
		for (unsigned int i = 0; i < copy._size; i++)
		{
			this->arr[i] = copy.arr[i];
		}
	}

	template<typename T>
	Array<T> &Array<T>::operator=(Array<T> const &copy)
	{
		if (this->arr)
			delete[] this->arr;

		this->_size = copy._size;
		this->arr = new T[copy._size];
		for (unsigned int i = 0; i < copy._size; i++)
		{
			this->arr[i] = copy.arr[i];
		}

		return (*this);
	}



	template<typename T>
	Array<T>::Array(const unsigned int n)
	{
		this->_size = n;
		this->arr = new T[n]();
	}

	template<typename T>
	T &Array<T>::operator[](unsigned int index)
	{
		if (index >= _size)
			throw Array::OutOfBoundException();
		return (arr[index]);
	}

	template<typename T>
	T &Array<T>::operator[](unsigned int index) const
	{
		if (index >= _size)
			throw Array::OutOfBoundException();
		return (arr[index]);
	}



	template<typename T>
	const char *Array<T>::OutOfBoundException::what() const throw()
	{
		return ("index is out of bound");
	}

	template<typename T>
	std::size_t Array<T>::size() const
	{
		return (_size);
	}

#endif
