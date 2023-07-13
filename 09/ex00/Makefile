NAME = btc
SRC = main.cpp
INC = BitcoinExchange.hpp

ifdef DEBUG
	CC=clang++
	FLAGS = -Wall -Werror -Wextra -fsanitize=address -DDEBUG=1 -g -std=c++98
else
	CC=c++ 
	FLAGS = -Wall -Werror -Wextra
endif

OBJ_DIR = object_files
OBJ = $(addprefix $(OBJ_DIR)/, $(SRC:.cpp=.o))

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

$(OBJ_DIR)/%.o: %.cpp $(INC) | $(OBJ_DIR)
	$(CC) $(FLAGS) -c $< -o $@

$(OBJ_DIR):
	mkdir $(OBJ_DIR)

clean:
	# rm -f $(OBJ)
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all
.PHONY = re fclean clean all
