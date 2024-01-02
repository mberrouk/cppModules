#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <cstddef>
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
				this->size = src.size();
				this->_arr = new T[this->size];
				for (size_t i = 0; i < this->size; i++)
					this->_arr[i] = src._arr[i];
			}

		}
		T &operator[](size_t index) {
			if (index >= this->size()) {
				std::runtime_error("Index Is Out Of Bounds.");
			}
			return (_arr[index]);
		}
		~Array() { delete[] _arr; }
		size_t size() { return (this->size);}


	private:
		T *_arr;
		size_t _size;
};

#endif
