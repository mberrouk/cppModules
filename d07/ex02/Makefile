SRC       = main.cpp
INCLUDES  = Array.hpp
CPPFLAGS  = -Wall -Wextra -Werror -std=c++98
NAME      = ARRAY
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
