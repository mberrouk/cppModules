SRC       =  main.cpp  Harl.cpp
CPPFLAGS  =  -Wall -Wextra -Werror
CC        =  c++
NAME      =  harlFilter
OBJS      =  $(SRC:.cpp=.o)

all       :  $(NAME)

$(NAME)   :  $(OBJS)
	$(CC)  $(CPPFLAGS)  $(OBJS)  -o $(NAME)

%.o       :  %.c
	$(CC)  $(CPPFLAGS)  -c  $^  -o $@

clean     :
	rm  -f  *.o
fclean    :  clean
	rm  -f  $(NAME)

re        :  fclean  all
