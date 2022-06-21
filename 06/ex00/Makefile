SRCS						=	main.cpp \
								print.cpp \
								check_if_num.cpp \

INCL						=	convert.hpp \

OBJS						= $(SRCS:.cpp=.o)

COMPILER					= clang++

REMOVE_DIRECTORY_ENTRIES	= rm -f

COMPILE_FLAGS				= -Wall -Wextra -Werror -std=c++98  -I.

PROGRAM_NAME				= scalar_conversion

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