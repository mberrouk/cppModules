#include "BitcoinExchange.hpp"

int main(int argc, char *argv[]) {

  (void)argv;
  const BitcoinExchange btc;

  try {

    if (argc < 2)
      btc.err_msg(btc.FILE_OPEN_ERR);

		btc.printData();

  } catch (std::exception &e) {

    std::cout << "Error: " << e.what() << std::endl;
  }

	return (0);
}
