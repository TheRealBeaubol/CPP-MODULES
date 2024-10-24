NAME					= 	replace

CC						=	g++
CPPFLAGS				=	-Wall -Wextra -Werror -std=c++98
RM						= 	@rm -rf

COLOR_1	= \033[1;38;5;28m
COLOR_2	= \033[1;38;5;120m
COLOR_3	= \033[1;38;5;240m
COLOR_4	= \033[1;38;5;255m
COLOR_5	= \033[1;38;5;248m
RESET	= \033[0m

SRC						=	main.cpp
OBJS 					=	$(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
		$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME) 
		@printf "  ✅ $(COLOR_2)$(NAME) successfully compiled$(RESET)\n"
		@printf "  🔄 $(COLOR_3)$(NAME) is ready to run$(RESET) \n\n"

clean:
		@printf "  👾 \033[1;4;38;5;240m$(NAME)$(RESET)   \n  $(COLOR_3)└──> 🗑️    $(COLOR_4).o $(COLOR_5)have been deleted$(RESET)\n"
		$(RM) $(OBJS)

fclean: clean
		@printf "  $(COLOR_3)└──> 🗑️    $(COLOR_4)$(NAME) binary $(COLOR_5)has been deleted$(RESET)\n\n"	
		$(RM) $(NAME)

re:	fclean all

.PHONY:	re fclean all clean
