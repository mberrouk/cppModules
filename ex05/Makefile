SRC       =  main.cpp  Harl.cpp
CPPFLAGS  =  -Wall  -Wextra  -Werror -std=c++98
NAME      =  Harl
CC        =  c++
OBJS      =  $(SRC:.cpp=.o)

all       :  $(NAME)

$(NAME)   :  $(OBJS)
	$(CC)  $(CPPFLAGS)  $(OBJS)  -o  $(NAME)

%.o       :  %.c
	$(CC)  $(CPPFLAGS)  $^  -o  $@

clean     :
	rm  -f  *.o

fclean    :  clean
	rm  -f  $(NAME)

re        :  fclean  all
