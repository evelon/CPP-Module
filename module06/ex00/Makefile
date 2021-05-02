.PHONY: all re clean fclean

NAME = convert

all: $(NAME)

CPP = clang++
CFLAGS = -Wall -Werror -Wextra

SRCS = \
	convert.cpp
OBJS = $(SRCS:.cpp=.o)

$(NAME): $(OBJS)
	$(CPP) $(CFLAGS) -o $@ $^

%.o: %.cpp
	$(CPP) $(CFLAGS) -c -o $@ $<

re: clean all

clean:
	rm -rf $(OBJS) *_shrubbery

fclean: clean
	rm -rf $(NAME)
