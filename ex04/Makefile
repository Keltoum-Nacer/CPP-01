SRCS = main.cpp 
OFILES = $(SRCS:.cpp=.o)
CC = g++
#CFLAGS = -Wall -Wextra -Werror 
NAME = file

all: $(NAME)

$(NAME) : $(OFILES)
	$(CC) $(SRCS) -o $(NAME)

clean: 	
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all