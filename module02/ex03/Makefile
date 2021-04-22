.PHONY: all re clean fclean

NAME = eval_expr

all: $(NAME)

CPP = clang++
CFLAGS = -Wall -Werror -Wextra

SRCS = main.cpp \
	Fixed.class.cpp
OBJS = $(SRCS:.cpp=.o)

$(NAME): $(OBJS)
	$(CPP) $(CFLAGS) -o $@ $^

%.o: %.cpp
	$(CPP) $(CFLAGS) -c -o $@ $<

re: clean all

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)
