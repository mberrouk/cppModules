SRC       = main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp \
			PresidentialPardonForm.cpp RobotomyRequestForm.cpp Intern.cpp
INCLUDES  = Bureaucrat.hpp AForm.hpp ShrubberyCreationForm.hpp \
			PresidentialPardonForm.hpp RobotomyRequestForm.hpp Intern.hpp
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
