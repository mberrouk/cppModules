/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberrouk <mberrouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 20:31:54 by mberrouk          #+#    #+#             */
/*   Updated: 2024/01/07 20:33:02 by mberrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_TPP
#define EASYFIND_TPP

template <typename T> int easyfind(const T &container, int first_occur) {

  typename T::const_iterator it;

  it = std::find(container.begin(), container.end(), first_occur);
  if (it == container.end())
	  throw std::runtime_error("No Occurrence Is Found.\n");

	return (*it);
}

#endif
