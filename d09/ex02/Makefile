# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mberrouk <mberrouk@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/03 19:45:14 by mberrouk          #+#    #+#              #
#    Updated: 2024/01/15 09:35:01 by mberrouk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC       = main.cpp PmergeMe.cpp
INCLUDES  = PmergeMe.hpp
CPPFLAGS  = #-fsanitize=address -g3 #-Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3
NAME      = PmergeMe
OBJS      = $(SRC:.cpp=.o)
CC        = c++

all       : $(NAME)

$(NAME)   : $(INCLUDES) $(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

%.o       : %.cpp
	$(CC) $(CPPFLAGS) -c $^ -o $@

clean     :
	$(RM) *.o

fclean    : clean
	$(RM) $(NAME)

re        : fclean all
