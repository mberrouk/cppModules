SRC       = main.cpp Bureaucrat.cpp Form.cpp
INCLUDES  = Bureaucrat.hpp Form.hpp 
CPPFLAGS  = -Wall -Wextra -Werror -std=c++98
NAME      = Bureaucrat
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
