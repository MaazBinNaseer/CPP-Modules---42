NAME	=	Pmerge
CXX		=	c++
CXXFLAGS =	-std=c++98 -Wall -Wextra -Werror 

SRCS	=	Pmerge.cpp \
			main.cpp 

GREEN   =   \033[1;32m 
RESET   =   \033[0m 

all		:	$(NAME)

$(NAME)	:	$(SRCS)
				$(CXX) $(CXXFLAGS) $(SRCS) -o $(NAME)
				@echo "$(GREEN)\033[1mCompilation complete$(RESET)"

clean	:
			@ rm -f $(NAME)

fclean 	:	clean

re 		: 	fclean all

.PHONY	:	all clean fclean re