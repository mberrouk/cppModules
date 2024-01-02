#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <cstddef>
#include <iostream>
#include <stdexcept>
template<typename T>
class Array {
	public:
		Array(): _arr(NULL), _size(0) {}
		Array(const unsigned int n): _arr(new T[n]), _size(n) {}
		Array(const Array &src) :_arr(NULL){
			*this = src;
		}
		Array &operator=(const Array &src) {
			if (this != &src) {
				if (this->_arr)
					delete[] _arr;
				this->_size = src.size();
				this->_arr = new T[this->_size];
				for (size_t i = 0; i < this->_size; i++)
					this->_arr[i] = src._arr[i];
			}
			return (*this);
		}
		T &operator[](int index) {
			// std::cout << "in operator " << index << std::endl;
			if (index >= this->size() || index < 0) {
				throw std::runtime_error("Index Is Out Of Bounds.");
			}
			return (_arr[index]);
		}
		~Array() { delete[] _arr; }
		int size() const { return (this->_size);}


	private:
		T *_arr;
		int _size;
};

#endif
