# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mberrouk <mberrouk@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/27 22:01:34 by mberrouk          #+#    #+#              #
#    Updated: 2023/11/27 22:59:31 by mberrouk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC       = main.cpp ClapTrap.cpp ScavTrap.cpp
CPPFLAGS  = -Wall  -Wextra  -Werror  -std=c++98
NAME      = ScavTrap
OBJS      = $(SRC:.cpp=.o)
CC        = c++

all       : $(NAME)

$(NAME)   : $(OBJS)
	$(CC)  $(CPPFLAGS)  $(OBJS)  -o $(NAME)

%.o       : %.cpp %.hpp
	$(CC)  $(CPPFLAGS)  -c  $<  -o  $@

clean     :
	rm  -f  *.o

fclean    : clean
	rm  -f  $(NAME)

re        : fclean  all
