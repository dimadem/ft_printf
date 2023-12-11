# Colors

DEF_COLOR = \033[0;39m
GRAY = \033[0;90m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;94m
MAGENTA = \033[0;95m
CYAN = \033[0;96m
WHITE = \033[0;97m


# Variables

NAME = libftprintf.a
INCLUDE = include
LIBFT = ./libft/

FT_PRINTF_DIR = ./ft_printf/
OBJ_DIR = ./obj/

CC = cc
CFLAGS = -Wall -Werror -Wextra
RM = rm -rf
AR = ar rcs


# Sources

FT_PRINTF_SRC = 				ft_printf.c					\
								ft_printf_hexadecimal.c		\
								ft_printf_pointer.c			\
								ft_printf_unsigned.c		\
								ft_printf_utils.c			\

SRC = $(addprefix $(FT_PRINTF_DIR), $(FT_PRINTF_SRC))
OBJ = $(addprefix $(OBJ_DIR), $(FT_PRINTF_SRC:.c=.o))

OBJF		=	.cache_exists

all: $(NAME)

$(OBJ_DIR)%.o: $(FT_PRINTF_DIR)%.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	@make -C $(LIBFT)
	@echo "$(GREEN)libft compiled$(DEF_COLOR)"
	@cp libft/libft.a ./
	@mv libft.a $(NAME)
	@$(AR) $(NAME) $(OBJ)
	@echo "$(GREEN)ft_printf compiled!$(DEF_COLOR)"

//$(OBJ_DIR)%.o: $(FT_PRINTF_DIR)%.c | $(OBJF)
			@echo "$(YELLOW)Compiling: $< $(DEF_COLOR)"
			@$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

//clean:
			@$(RM) -rf $(OBJ_DIR)
			@make clean -C $(LIBFT)
			@echo "$(BLUE)ft_printf object files cleaned!$(DEF_COLOR)"

fclean:		clean
			@$(RM) -f $(NAME)
			@$(RM) -f $(LIBFT)/libft.a
			@echo "$(CYAN)ft_printf executable files cleaned!$(DEF_COLOR)"
			@echo "$(CYAN)libft executable files cleaned!$(DEF_COLOR)"

//re:			fclean all
			@echo "$(GREEN)Cleaned and rebuilt everything for ft_printf!$(DEF_COLOR)"

.PHONY:		all clean fclean re norm
