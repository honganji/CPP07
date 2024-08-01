#ifndef ITER_H
# define ITER_H

#include <iostream>

template <typename T>
class Array
{
	private:
		T *_array;
		unsigned int size;

	public:
		Array(void);
		Array(unsigned int len);
		Array(const Array &ref);
		Array &operator=(const Array &ref);
		~Array(void);
};

template <typename T>
Array<T>::Array(void)
{
	_array = new T[];
	_size = 0;
};

template <typename T>
Array<T>::Array(unsigned int len)
{
	_array = new T[len];
	_size = len;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array<T> &ref);
#endif
