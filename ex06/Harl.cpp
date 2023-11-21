#include "Harl.hpp"

void Harl::debug( void ) {
	std::cout << "[ DEBUG ]" << std::endl
		<< "I love having extra bacon for my 7XL-double-cheese-triple"
		<< "-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info( void ) {
	std::cout << "[ INFO ]" << std::endl
		<< "I cannot believe adding extra bacon costs more money.\n"
		<< "You didn’t put enough bacon in my burger! If you did,"
		<< " I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning( void ) {
	std::cout << "[ WARNING ]" << std::endl
		<< "I think I deserve to have some extra bacon for free.\n"
		<< " I’ve been coming for years whereas you started working"
		<< " here since last month." << std::endl;
}

void Harl::error( void ) {
	std::cout << "[ ERROR ]" << std::endl
		<< "This is unacceptable! I want to speak to the manager now."
		<< std::endl;
}

void Harl::complain( std::string level ) {
	std::string levels[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	void (Harl:: *ptrMembFun[4])( void ) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	int flag = 0;

	for ( ; flag < 4; flag++)
		if (level == levels[flag])
			break ;

	switch (flag) {
		case 0:
			(this->*ptrMembFun[flag])();
			flag++;
		case 1:
			(this->*ptrMembFun[flag])();
			flag++;
		case 2:
			(this->*ptrMembFun[flag])();
			flag++;
		case 3:
			(this->*ptrMembFun[flag])();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]"
			<< std::endl;
	}
}
