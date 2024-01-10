#include "BitcoinExchange.hpp"

int main(int argc, char *argv[]) {
  BitcoinExchange btc;

	if (argc < 2)
    return btc.err_msg(FILE_OPEN_ERR);
  btc.get_DataBase(argv[1]);
}
