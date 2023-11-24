SRC       =  main.cpp  Weapon.cpp  HumanA.cpp  HumanB.cpp
CPPFLAGS  =  -Wall  -Wextra  -Werror -std=c++98
CC        =  c++
OBJS      =  $(SRC:.cpp=.o)
NAME      =  EX03

all       :  $(NAME)

$(NAME)   :  $(OBJS)
	$(CC)  $(CPPFLAGS)  $(OBJS)  -o  $(NAME)

%.o       :  %.cpp
	$(CC)  $(CPPFLAGS)  -c $^  -o  $@

clean     :
	rm -f  *.o

fclean    :  clean
	rm -f  $(NAME)

re        : fclean  all
