NAME	=	main
CC		=	c++
CFLAGS	=	-std=c++98 -Wall -Wextra -Werror
OBJ = $(SRCS:.cpp=.o)


GREEN   =   \033[1;32m 
RESET   =   \033[0m 

SRCS	=	Harl.cpp \
			main.cpp \

all		:	$(NAME)

$(NAME)	:	$(OBJ)
				$(CC) $(CFLAGS) $(SRCS) -o $(NAME)
				@echo "$(GREEN)\033[1mCompilation complete$(RESET)"

%.o :%.cpp 
	$(CC) $(CFLAGS) -c $< -o $@ 

clean	:
			@ rm -f $(OBJ)

fclean 	:	clean
			@ rm -f $(NAME)

re 		: 	fclean all

.PHONY	:	all clean fclean re