.PHONY: all re clean fclean

NAME = a.out

all: $(NAME)

CPP = clang++
CFLAGS = -Wall -Werror -Wextra

SRCS = \
	Person.cpp \
	Sorcerer.cpp \
	Victim.cpp \
	Peon.cpp \
	You.cpp \
	main.cpp
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
