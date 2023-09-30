NAME = miniRT
CC = cc
# CFLAGS = -Wall -Werror -Wextra
#CFLAGS += -g -fsanitize=address

INCLUDES_DIR = include
MINILIBX_DIR = minilibx-linux
X11_DIR = /usr/X11

LIBFT_DIR = libft
LIBFT_FLAGS = libft/libft.a libft/libftprintf.a libft/libftdprintf.a

INCLUDES =  -I$(INCLUDES_DIR) -I$(MINILIBX_DIR) -I$(X11_DIR)/include -I$(LIBFT_DIR)/includes
MINILIBX_FLAGS = -L$(MINILIBX_DIR) -lmlx -L$(X11_DIR)/lib -lX11 -lXext


SRCS_DIR = src
SRCS = $(SRCS_DIR)/main.c	\
		$(SRCS_DIR)/init.c	\
		$(SRCS_DIR)/objs_newnode.c	\
		$(SRCS_DIR)/objs_utils.c

OBJS_DIR = obj
OBJS = $(patsubst $(SRCS_DIR)/%.c,$(OBJS_DIR)/%.o,$(SRCS))

RM = rm -rf

all: $(NAME)

$(NAME):	$(OBJS)
	$(MAKE) -C $(MINILIBX_DIR)
	$(MAKE) -C libft
	$(CC) $(CFLAGS) $(MINILIBX_FLAGS) $(INCLUDES) $(LIBFT_FLAGS) -o $@ $^

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	$(MAKE) -C $(MINILIBX_DIR) clean
	$(MAKE) -C $(LIBFT_DIR) clean
	$(RM) $(OBJS_DIR)

fclean:	clean
	$(MAKE) -C $(LIBFT_DIR) fclean
	$(RM) $(NAME)

re: fclean all

.PHONY: all fclean clean re
