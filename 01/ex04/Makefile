NAME = Sed_is_for_losers
SRC = main.cpp Sed.cpp
INC = Sed.hpp 

ifdef DEBUG
	CC=clang++
	FLAGS = -Wall -Werror -Wextra -fsanitize=address -DDEBUG=1 -g -std=c++98
else
	CC=c++
	FLAGS = -Wall -Werror -Wextra
endif

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp $(INC)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) *.replace

fclean: clean
	rm -f $(NAME)

re: fclean all
.PHONY = re fclean clean all
