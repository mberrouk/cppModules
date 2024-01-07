#ifndef MUTANSTACK_HPP
#define MutantStack_HPP
#include <stack>
#include <vector>
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
		iterator begin()
		{
			return this->c.begin();
		}
		iterator end()
		{
			return this->c.end();
		}
		iterator rend()
		{
			return this->c.rend();
		}
		iterator rbegin()
		{
			return this->c.rbegin();
		}
};

#endif
