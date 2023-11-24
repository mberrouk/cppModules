SRC       = main.cpp  Zombie.cpp  zombieHorde.cpp
CPPFLAGS  = -Wall  -Wextra  -Werror  -std=c++98
NAME      = Zombies
OBJS      = $(SRC:.cpp=.o)
CC        = c++ -fsanitize=address -g

all       : $(NAME)

$(NAME)   : $(OBJS)
	$(CC)  $(CPPFLAGS) $(OBJS)  -o  $(NAME)

%.o       : %.cpp
	$(CC)  $(CPPFLAGS)  -c  $^ -o $@

clean     :
	rm  -f  *.o

fclean    : clean
	rm  -f  $(NAME)

re        : fclean          all
