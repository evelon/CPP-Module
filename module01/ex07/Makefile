.PHONY: all re clean fclean

NAME: replace

all: $(NAME)

CPP = clang++
CFLAGS = -Wall -Werrror -Wextra

SRCS =
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
