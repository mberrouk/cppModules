#ifndef MUTANSTACK_HPP
#define MutantStack_HPP

#include <stack>
#include <deque>

template<typename T>
class MutantStack : public std::stack<T> {

	public:
		MutantStack(){}
		~MutantStack(){}
		MutantStack(const MutantStack &obj){
			*this = obj;
		}
		typedef typename std::deque<T>::iterator iterator; 
		typedef typename std::deque<T>::const_iterator const_iterator; 
		iterator begin() const {
			return this->c.begin();
		}
		iterator end() const {
			return this->c.end();
		}
		iterator rend() const {
			return this->c.rend();
		}
		iterator rbegin() const {
			return this->c.rbegin();
		}
};

#endif
