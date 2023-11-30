SRC       = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongCat.cpp WrongAnimal.cpp
INCLUDES  = Animal.hpp Dog.hpp Cat.hpp WrongAnimal.hpp WrongCat.hpp
CPPFLAGS  = -Wall  -Wextra  -Werror  -std=c++98
NAME      = Animal
OBJS      = $(SRC:.cpp=.o)
CC        = c++

all       : $(NAME)

$(NAME)   : $(OBJS) $(INCLUDES)
	$(CC)  $(CPPFLAGS)  $(OBJS)  -o $(NAME)

%.o       : %.cpp
	$(CC)  $(CPPFLAGS)  -c  $^  -o  $@

clean     :
	rm  -f  *.o

fclean    : clean
	rm  -f  $(NAME)

re        : fclean  all
