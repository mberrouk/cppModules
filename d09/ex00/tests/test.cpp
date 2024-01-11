#include "../BitcoinExchange.hpp"
#include <exception>

int main(int argc, char *argv[]) {
  const BitcoinExchange btc;
  (void)argv;
  try {
    if (argc < 2)
      btc.err_msg(btc.FILE_OPEN_ERR);
    {
      BitcoinExchange btcCopy(btc);
      btcCopy.printData();
    }
		{
			BitcoinExchange btcCopy;
			btcCopy = btc;
      btcCopy.printData();
		}
		const BitcoinExchange constBtc(btc);
		constBtc.printData();

  } catch (std::exception &e) {
    std::cout << "Error\r" << e.what() << std::endl;
  }
	catch (...) {
		std::cout << "Error: undefined!" << std::endl;
	}
}
