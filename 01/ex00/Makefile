NAME = BraiiiiiiinnnzzzZ
CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98

SRC = 	main.cpp \
		Zombie.cpp \
		newZombie.cpp \
		randomChump.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)


%.o: %.cpp
	$(CC) $(FLAGS) -c $^ -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: re fclean clean all