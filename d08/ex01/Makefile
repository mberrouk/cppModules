# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mberrouk <mberrouk@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/03 19:45:14 by mberrouk          #+#    #+#              #
#    Updated: 2024/01/07 20:34:03 by mberrouk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC       = main.cpp Span.cpp
INCLUDES  = Span.hpp
CPPFLAGS  = -Wall -Wextra -Werror -std=c++98
NAME      = Span
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
