/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberrouk <mberrouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 19:45:25 by mberrouk          #+#    #+#             */
/*   Updated: 2024/01/03 19:45:26 by mberrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <cstddef>
template <typename T>
void iter(T *arr, size_t size, void (*fun)(T &elem)) {
  if (!arr || !fun)
    return;
  for (size_t i = 0; i < size; i++)
    fun(arr[i]);
}

#endif // !ITER_HPP
