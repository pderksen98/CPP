NAME = Bureaucrat
SRC = main.cpp Bureaucrat.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp AForm.cpp
INC = Bureaucrat.hpp Colors.hpp AForm.hpp ShrubberyCreationForm.hpp RobotomyRequestForm.hpp PresidentialPardonForm.hpp

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
	rm -f *_shrubbery

re: fclean all
.PHONY = re fclean clean all
