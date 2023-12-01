# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mberrouk <mberrouk@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/01 16:27:50 by mberrouk          #+#    #+#              #
#    Updated: 2023/12/01 16:27:51 by mberrouk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC       = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongCat.cpp WrongAnimal.cpp Brain.cpp
INCLUDES  = Animal.hpp Dog.hpp Cat.hpp WrongAnimal.hpp WrongCat.hpp Brain.hpp
CPPFLAGS  = -Wall  -Wextra  -Werror  -std=c++98
NAME      = Animal
OBJS      = $(SRC:.cpp=.o)
CC        = c++

all       : $(NAME)

$(NAME)   : $(OBJS) $(INCLUDES)
	$(CC)  $(CPPFLAGS)  $(OBJS)  -o $(NAME)

%.o       : %.cpp
	$(CC)  $(CPPFLAGS)  -c  $^  -o  $@

clean     :
	rm  -f  *.o

fclean    : clean
	rm  -f  $(NAME)

re        : fclean  all
