NAME = megaphone
SRC = megaphone.cpp

ifdef DEBUG
	CC=clang++
	FLAGS = -Wall -Werror -Wextra -fsanitize=address -g -std=c++98
#FLAGS = -Wall -Werror -Wextra -fsanitize=address -DDEBUG=1 -g -std=c++98
else
	CC=c++
	FLAGS = -Wall -Wextra -Werror
endif

all: $(NAME)

$(NAME) : $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean :

fclean:
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re


#OBJ = $(SRC:.cpp=.o)
#
#all: $(NAME)
#
#$(NAME): $(OBJ)
#	$(CC) $(FLAGS) $(OBJ) -o $(NAME)
#
#%.o: %.c
#	$(CC) $(FLAGS) -c $^ -o $@
#
#clean:
#	rm -f $(OBJ)
#
#fclean: clean
#	rm -f $(NAME)
#
#re: fclean all
#
#.PHONY: all clean fclean re