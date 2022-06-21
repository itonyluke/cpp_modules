SRCS						= megaphone.cpp

OBJS						= $(SRCS:.cpp=.o)

COMPILER					= clang++

REMOVE_DIRECTORY_ENTRIES	= rm -f

COMPILE_FLAGS				= -Wall -Wextra -Werror -std=c++98 -pedantic-errors -I.

PROGRAM_NAME				= megaphone

JIC_A_OUT					= a.out

%.o: %.cpp
								$(COMPILER) $(COMPILE_FLAGS)  -c $< -o ${<:.cpp=.o}

all:						$(PROGRAM_NAME)

$(PROGRAM_NAME):			$(OBJS)
									$(COMPILER) $(COMPILE_FLAGS) $(OBJS) -o $(PROGRAM_NAME)

clean:
									$(REMOVE_DIRECTORY_ENTRIES) $(OBJS) $(JIC_A_OUT)

fclean:						clean
									$(REMOVE_DIRECTORY_ENTRIES) $(PROGRAM_NAME)

re:							fclean $(PROGRAM_NAME)

test:						$(PROGRAM_NAME)
									./megaphone "shhhhh... I think the students are asleep..."
									./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
									./megaphone

.PHONY:						all clean fclean re test