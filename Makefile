# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thmelen <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/25 17:24:23 by thmelen           #+#    #+#              #
#    Updated: 2018/04/25 17:24:50 by thmelen          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= get_next_line
INC		= includes
SRC_DIR = srcs

SRCS	= main.c \
				get_next_line.c \
				file.c

OBJ_DIR = obj
OBJS	= $(SRCS:.c=.o)
CC		= gcc
CFLAGS	= -Wall -Werror -Wextra
OFLAGS	= -pipe -flto
LIB_DIR	= libft
LIB		= libft.a

%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -I $(INC) -c $<

$(NAME): lib $(OBJS)
	$(CC) $(CFLAGS) $(OFLAGS) $(OBJS) $(LIB_DIR)/$(LIB) -o $(NAME)
	@mkdir -p $(OBJ_DIR) 2> /dev/null
	@mv $(OBJS) $(OBJ_DIR)/

# Essentials
all: $(NAME)
clean:
	rm -rf $(OBJ_DIR)
	$(MAKE) -C $(LIB_DIR) clean
fclean:
	rm -rf $(OBJ_DIR)
	rm -f $(NAME)
	$(MAKE) -C $(LIB_DIR) fclean
re: fclean all

# Libft
lib:
	$(MAKE) -C $(LIB_DIR)
