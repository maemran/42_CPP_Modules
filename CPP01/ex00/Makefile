CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = Zombie.cpp main.cpp newZombie.cpp randomChump.cpp
OBJ_DIR = OBJ
OBJ = $(SRC:.cpp=.o)
NAME = Zombie

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o:%.cpp ./Zombie.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR) 

clean:
	rm -fr $(OBJ)

fclean: clean
	rm -fr $(NAME)

re: fclean all

.PHONY: all clean fclean re