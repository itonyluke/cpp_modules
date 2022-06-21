SRCS						=	main.cpp

OBJS						= $(SRCS:.cpp=.o)

COMPILER					= clang++

REMOVE_DIRECTORY_ENTRIES	= rm -f

COMPILE_FLAGS				= -Wall -Wextra -Werror -std=c++98 -pedantic-errors -I.

PROGRAM_NAME				= replace

JIC_A_OUT					= a.out

REPLACE_FILE				= *.replace

%.o: %.cpp					${INCL}
								$(COMPILER) $(COMPILE_FLAGS) -I. -c $< -o ${<:.cpp=.o}

.PHONY:						all clean fclean re

all:						$(PROGRAM_NAME)

$(PROGRAM_NAME):			$(OBJS)
								$(COMPILER) $(COMPILE_FLAGS) $(OBJS) -o $(PROGRAM_NAME)

clean:
								$(REMOVE_DIRECTORY_ENTRIES) $(OBJS) $(JIC_A_OUT) $(REPLACE_FILE)

fclean:						clean
								$(REMOVE_DIRECTORY_ENTRIES) $(PROGRAM_NAME)

re:							fclean $(PROGRAM_NAME)