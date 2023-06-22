NAME	=	Animal
CC		=	c++
CFLAGS	=	-std=c++98 -Wall -Wextra -Werror -g

SRCS	=	Animal.cpp \
			Dog.cpp \
			Cat.cpp \
			Brain.cpp\
			main.cpp \

GREEN   =   \033[1;32m 
RESET   =   \033[0m 

all		:	$(NAME)

$(NAME)	:	$(SRCS)
				$(CC) $(CFLAGS) $(SRCS) -o $(NAME)
				@echo "$(GREEN)\033[1mCompilation complete$(RESET)"

clean	:
			@ rm -f $(NAME)

fclean 	:	clean

re 		: 	fclean all

.PHONY	:	all clean fclean re