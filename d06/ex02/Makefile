# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mberrouk <mberrouk@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/27 16:25:13 by mberrouk          #+#    #+#              #
#    Updated: 2023/12/27 16:25:13 by mberrouk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC       =  Base.cpp  identify.cpp  main.cpp
INCLUDES  = A.hpp B.hpp Base.hpp C.hpp identify.hpp
CPPFLAGS  = -Wall -Wextra -Werror -std=c++98
NAME      = Serialization
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
