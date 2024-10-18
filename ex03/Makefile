SRCS = main.cpp Weapon.cpp  HumanA.cpp HumanB.cpp 
OFILES = $(SRCS:.cpp=.o)
CC = g++
#CFLAGS = -Wall -Wextra -Werror 
NAME = violence

all: $(NAME)

$(NAME) : $(OFILES)
	$(CC) $(SRCS) -o $(NAME)

clean: 	
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all