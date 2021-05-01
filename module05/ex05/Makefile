.PHONY: all re clean fclean

NAME = a.out

all: $(NAME)

CPP = clang++
CFLAGS = -Wall -Werror -Wextra

SRCS = \
	CentralBureaucracy.cpp \
	OfficeBlock.cpp \
	Bureaucrat.cpp \
	Intern.cpp \
	Form.cpp \
	CauseException.cpp \
	PresidentialPardonForm.cpp \
	RobotomyRequestForm.cpp \
	ShrubberyCreationForm.cpp \
	exQueue.cpp \
	main.cpp
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
