# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mberrouk <mberrouk@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/03 19:45:14 by mberrouk          #+#    #+#              #
#    Updated: 2024/01/07 20:34:07 by mberrouk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC       = main.cpp BitcoinExchange.cpp
INCLUDES  = BitcoinExchange.hpp
CPPFLAGS  = -Wall -Wextra -Werror -std=c++98
NAME      = btc
TEST      = btcTEST
OBJS      = $(SRC:.cpp=.o)
CC        = c++

all       : $(NAME)

$(NAME)   : $(INCLUDES) $(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

%.o       : %.cpp
	$(CC) $(CPPFLAGS) -c $^ -o $@

test      : $(TEST) tests/test.cpp BitcoinExchange.cpp

$(TEST)   : $(INCLUDES) 
	$(CC)  $(CPPFLAGS) tests/test.cpp BitcoinExchange.cpp -o $(TEST)

clean     :
	$(RM) *.o
	$(RM) $(TEST)

fclean    : clean
	$(RM) $(NAME)

re        : fclean all
