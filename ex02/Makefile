SRC       =  main.cpp
CC        =  c++
CPPFLAGS  =  -Wall     -Wextra  -Werror  -std=c++98
NAME      =  BRAIN

all       : $(NAME)

$(NAME)   : $(SRC)
	$(CC)  $(CPPFLAGS)  $(SRC)  -o  $(NAME)

clean     :
	rm -f $(NAME)

fclean    : clean

re        : fclean all
