SRCS = main.cpp Harl.cpp
OFILES = $(SRCS:.cpp=.o)
CC = g++
CFLAGS = -Wall -Wextra -Werror 
NAME = Harl

all: $(NAME)

$(NAME) : $(OFILES)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean: 	
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all