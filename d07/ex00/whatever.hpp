/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberrouk <mberrouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 19:45:18 by mberrouk          #+#    #+#             */
/*   Updated: 2024/01/03 19:50:22 by mberrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename T>
void swap(T& val1, T& val2) {
	T tmp;

	tmp = val1;
	val1 = val2;
	val2 = tmp;
}

template <typename T>
T& min(T &first, T &second) {
	return (second <= first) ? second : first;
}

template <typename T>
T& max(T &first, T &second) {
	return (second >= first) ? second : first;
}

#endif // !WHATEVER_HPP
