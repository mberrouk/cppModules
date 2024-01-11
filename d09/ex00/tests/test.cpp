#include "BitcoinExchange.hpp"
#include <exception>

int main(int argc, char *argv[]) {
  BitcoinExchange btc;
  (void)argv;
  try {
    if (argc < 2)
      btc.err_msg(btc.FILE_OPEN_ERR);
    btc.readData();
    {
      BitcoinExchange btcCopy(btc);
      btcCopy.printData();
    }
		{
			BitcoinExchange btcCopy;
			btcCopy = btc;
      btcCopy.printData();
		}

  } catch (std::exception &e) {
    std::cout << "Error\r" << e.what() << std::endl;
  }
}
