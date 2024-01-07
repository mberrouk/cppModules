/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberrouk <mberrouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 20:33:50 by mberrouk          #+#    #+#             */
/*   Updated: 2024/01/07 20:38:52 by mberrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		iterator begin() {
			return this->c.begin();
		}
		const_iterator begin() const {
			return this->c.begin();
		}
		iterator end(){
			return this->c.end();
		}
		const_iterator end() const {
			return this->c.end();
		}
		iterator rend() {
			return this->c.rend();
		}
		const_iterator rend() const {
			return this->c.rend();
		}
		iterator rbegin() {
			return this->c.rbegin();
		}
		const_iterator rbegin() const {
			return this->c.rbegin();
		}
};

#endif
