
NAME = push_swap

SRCS_DIR = ./srcs
SRCS = $(SRCS_DIR)/addback.c $(SRCS_DIR)/apply_push.c\
	   $(SRCS_DIR)/cheapst_calculation.c $(SRCS_DIR)/checker.c\
	   $(SRCS_DIR)/command.c $(SRCS_DIR)/command2.c\
	   $(SRCS_DIR)/command3.c $(SRCS_DIR)/free.c\
	   $(SRCS_DIR)/lst_utils.c $(SRCS_DIR)/lst_utils2.c\
	   $(SRCS_DIR)/main.c $(SRCS_DIR)/newnode.c\
	   $(SRCS_DIR)/print_error.c $(SRCS_DIR)/solver_ab.c\
	   $(SRCS_DIR)/solver_ba.c $(SRCS_DIR)/sort_three.c\
	   $(SRCS_DIR)/sort.c $(SRCS_DIR)/stack_init.c

OBJ_DIR = obj
OBJS = $(SRCS:$(SRCS_DIR)/%.c=$(OBJ_DIR)/%.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -L./libft -lft -I./libft
LIBFT_PATH = libft/
RM = rm -f

$(NAME) : $(OBJS)
	$(MAKE) -C $(LIBFT_PATH)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME) $(INCLUDES)

$(OBJ_DIR)/%.o : $(SRCS_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

all : $(NAME)

clean :
	$(RM) $(OBJS)
	$(RM) $(SRCS_DIR)/*.o
	@cd $(LIBFT_PATH) && $(MAKE) clean

fclean : clean
	$(RM) $(NAME)
	@cd $(LIBFT_PATH) && $(MAKE) fclean

re : fclean all

.PHONY : all clean fclean re
	