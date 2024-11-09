
NAME = push_swap.a
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

OBJS = $(SRCS:%.c=%.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror
INCUDES = -I./includes
LIBFT_PATH = ./libft/
LIBFT_NAME = libft.a
AR = ar rcs

$(NAME) : $(OBJS)
	$(MAKE) -C $(LIBFT_PATH)
	mv $(LIBFT_PATH)/$(LIBFT_NAME) $(NAME)
	$(AR) $(NAME) $(OBJS)

.c .o :
	$(CC) $(CFLAGS) $(INCUDES) -c $< -o $@

all : $(NAME)

clean :
	$(MAKE) -C $(LIBFT_PATH) clean
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re :	fclean all

.PHONY : all clean fclean re
	