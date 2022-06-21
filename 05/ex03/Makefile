SRCS						=	main.cpp \
								Bureaucrat.cpp \
								Form.cpp \
								ShrubberyCreationForm.cpp \
								RobotomyRequestForm.cpp \
								PresidentialPardonForm.cpp \
								Intern.cpp \

INCL						=	Bureaucrat.hpp \
								Form.hpp \
								ShrubberyCreationForm.hpp \
								RobotomyRequestForm.hpp \
								PresidentialPardonForm.hpp \
								Intern.hpp \

OBJS						= $(SRCS:.cpp=.o)

COMPILER					= clang++

REMOVE_DIRECTORY_ENTRIES	= rm -f

COMPILE_FLAGS				= -Wall -Wextra -Werror -std=c++98 -pedantic-errors -I.

PROGRAM_NAME				= at_least_this_beats_coffee_making

JIC_A_OUT					= a.out

%.o: %.cpp					${INCL}
								$(COMPILER) $(COMPILE_FLAGS) -I. -c $< -o ${<:.cpp=.o}

.PHONY:						all clean fclean re

all:						$(PROGRAM_NAME)

$(PROGRAM_NAME):			$(OBJS) $(INCL)
								$(COMPILER) $(COMPILE_FLAGS) $(OBJS) -o $(PROGRAM_NAME)

clean:
								$(REMOVE_DIRECTORY_ENTRIES) $(OBJS) $(JIC_A_OUT)

fclean:						clean
								$(REMOVE_DIRECTORY_ENTRIES) $(PROGRAM_NAME)

re:							fclean $(PROGRAM_NAME)