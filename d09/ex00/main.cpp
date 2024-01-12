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
