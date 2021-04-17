.PHONY: all re clean fclean

CPP = clang++
CPFLAG = -Wall -Wextra -Werror
NAME = megaphone
all: $(NAME)

SRC = megaphone.cpp
OBJ = $(SRC:.cpp=.o)

$(NAME): $(OBJ)
	$(CPP) $(CPFLAG) $< -o $@

%.o: %.cpp
	$(CPP) $(CPFLAG) -c $< -o $@

re: fclean all

clean:
	rm -rf $(OBJ)
fclean: clean
	rm -rf $(NAME)