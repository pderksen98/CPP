NAME = Orthodox
SRC = main.cpp Fixed.cpp
INC = Fixed.hpp

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
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
.PHONY = re fclean clean all
