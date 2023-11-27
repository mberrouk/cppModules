# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mberrouk <mberrouk@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/27 22:01:56 by mberrouk          #+#    #+#              #
#    Updated: 2023/11/27 22:59:26 by mberrouk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC       = main.cpp ClapTrap.cpp FragTrap.cpp
CPPFLAGS  = -Wall  -Wextra  -Werror  -std=c++98
NAME      = FragTrap
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
