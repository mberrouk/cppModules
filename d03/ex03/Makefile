SRC       = main.cpp ClapTrap.cpp FragTrap.cpp
CPPFLAGS  = -Wall  -Wextra  -Werror  -std=c++98
NAME      = FragTrap
OBJS      = $(SRC:.cpp=.o)
CC        = c++

all       : $(NAME)

$(NAME)   : $(OBJS)
	$(CC)  $(CPPFLAGS)  $(OBJS)  -o $(NAME)

%.o       : %.cpp
	$(CC)  $(CPPFLAGS)  -c  $^  -o  $@

clean     :
	rm  -f  *.o

fclean    : clean
	rm  -f  $(NAME)

re        : fclean  all
