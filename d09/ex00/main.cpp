/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberrouk <mberrouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 08:05:36 by mberrouk          #+#    #+#             */
/*   Updated: 2024/01/12 08:05:37 by mberrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char *argv[]) {

  (void)argv;
  BitcoinExchange btc;

  try {

    if (argc < 2)
      btc.err_msg(btc.FILE_OPEN_ERR);

		btc.readInput(argv[1]);

  } catch (std::exception &e) {

    std::cout << "Error: " << e.what() << std::endl;
  }

	return (0);
}
