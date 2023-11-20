SRC       = main.cpp 
CC        = c++
CPPFLAGS  = -Wall -Wextra -Werror
OBJS      = $(SRC:.cpp=.o)
NAME      = SedIsForLosers

all       : $(NAME)

$(NAME)   : $(OBJS)
	$(CC)  $(CPPFLAGS)  $(OBJS)  -o   $(NAME)

%.o       : %.cpp
	$(CC)  $(CPPFLAGS)  -c $^  -o  $@

clean     :
	rm  -f  *.o

fclean    : clean
	rm  -f  $(NAME)

re        : fclean  all
