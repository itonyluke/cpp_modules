SRCS						=	Account.cpp \
								tests.cpp \

INCL						= 	Account.hpp \

OBJS						= $(SRCS:.cpp=.o)

COMPILER					= clang++

REMOVE_DIRECTORY_ENTRIES	= rm -f

COMPILE_FLAGS				= -Wall -Wextra -Werror -std=c++98 -pedantic-errors -I.

PROGRAM_NAME				= account

JIC_A_OUT					= a.out

.PHONY:						all clean fclean re

%.o: %.cpp					$(INCL)
								$(COMPILER) $(COMPILE_FLAGS) -I. -c $< -o ${<:.cpp=.o}

all:						$(PROGRAM_NAME)

$(PROGRAM_NAME):			$(OBJS) $(INCL)
								$(COMPILER) $(COMPILE_FLAGS) $(OBJS) -o $(PROGRAM_NAME)

clean:
								$(REMOVE_DIRECTORY_ENTRIES) $(OBJS) $(JIC_A_OUT)

fclean:						clean
								$(REMOVE_DIRECTORY_ENTRIES) $(PROGRAM_NAME)

re:							fclean $(PROGRAM_NAME)

