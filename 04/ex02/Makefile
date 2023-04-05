NAME = animal
SRC = main.cpp AAnimal.cpp Cat.cpp Dog.cpp Brain.cpp
INC = AAnimal.hpp Cat.hpp Dog.hpp Brain.hpp

ifdef DEBUG
	CC=clang++
	FLAGS = -Wall -Werror -Wextra -fsanitize=address -DDEBUG=1 -g -std=c++98
else
	CC=c++
	FLAGS = -Wall -Werror -Wextra
endif

OBJ = $(SRC:.cpp=.o)
OBJD = obj/
OBJP = $(addprefix $(OBJD), $(SRC:.cpp=.o))

all: $(NAME)

$(NAME): $(OBJP)
	$(CC) $(FLAGS) $(OBJP) -o $(NAME)

$(OBJD)%.o: %.cpp $(INC)
	mkdir -p $(@D)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJD)

fclean: clean
	rm -f $(NAME)

re: fclean all
.PHONY = re fclean clean all
