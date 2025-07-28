CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
SRC =  main.cpp Contact.cpp PhoneBook.cpp utils.cpp
OBJ_DIR = OBJS
OBJ = $(addprefix $(OBJ_DIR)/, $(SRC:.cpp=.o))
NAME = phoneContacts

all: $(NAME)

$(NAME): $(OBJ) Contact.hpp PhoneBook.hpp phone_contacts.hpp
	$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)

$(OBJ_DIR)/%.o: %.cpp | $(OBJ_DIR) 
	$(CPP) $(CPPFLAGS) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

clean:
	rm -fr $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re