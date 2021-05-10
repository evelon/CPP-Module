.PHONY: all re clean fclean

NAME = MindOpenIntepreter

all: $(NAME)

CPP = clang++
CFLAGS = -Wall -Werror -Wextra #-fsanitize=address -g3

SRCS = \
	IncrPtr.cpp \
	DecrPtr.cpp \
	IncrVal.cpp \
	DecrVal.cpp \
	InputVal.cpp \
	OutputVal.cpp \
	LoopStart.cpp \
	LoopEnd.cpp \
	Executer.cpp \
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
