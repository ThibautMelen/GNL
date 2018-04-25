# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thmelen <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/05 17:33:37 by thmelen           #+#    #+#              #
#    Updated: 2018/04/05 21:02:37 by thmelen          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
INCS_DIR = includes/
SRCS_DIR = srcs/
OBJS_DIR = objs/
SRCS = ft_memset.c \
ft_bzero.c \
ft_memcpy.c \
ft_memccpy.c \
ft_memmove.c \
ft_memchr.c \
ft_memcmp.c \
ft_strlen.c \
ft_strdup.c \
ft_strcpy.c \
ft_strncpy.c \
ft_strcat.c \
ft_strncat.c \
ft_strlcat.c \
ft_strchr.c \
ft_strrchr.c \
ft_strstr.c \
ft_strnstr.c \
ft_strcmp.c \
ft_strncmp.c \
ft_atoi.c \
ft_isalpha.c \
ft_isdigit.c \
ft_isalnum.c \
ft_isascii.c \
ft_isprint.c \
ft_toupper.c \
ft_tolower.c \
ft_memalloc.c \
ft_memdel.c \
ft_strnew.c \
ft_strdel.c \
ft_strclr.c \
ft_striter.c \
ft_striteri.c \
ft_strmap.c \
ft_strmapi.c \
ft_strequ.c \
ft_strnequ.c \
ft_strsub.c \
ft_strjoin.c \
ft_strtrim.c \
ft_strsplit.c \
ft_itoa.c \
ft_putchar.c \
ft_putstr.c \
ft_putendl.c \
ft_putnbr.c \
ft_putchar_fd.c \
ft_putstr_fd.c \
ft_putendl_fd.c \
ft_putnbr_fd.c \
ft_lstnew.c \
ft_lstdelone.c \
ft_lstdel.c \
ft_lstadd.c \
ft_lstiter.c \
ft_lstmap.c \
ft_swap.c \
ft_strrev.c \
ft_cntword.c \
ft_len_nb.c \
ft_list_clear.c \
ft_isblank.c \
ft_isspace.c \
ft_isupper.c \
ft_islower.c \
ft_str_is_alpha.c \
ft_str_is_numeric.c \
ft_str_is_lowercase.c \
ft_str_is_uppercase.c \
ft_str_is_printable.c \
ft_strupcase.c \
ft_strlowcase.c \
ft_abs.c

OBJS = $(addprefix $(OBJS_DIR),$(SRCS:.c=.o))

$(OBJS_DIR)%.o: $(SRCS_DIR)%.c
	@mkdir -p $(OBJS_DIR)
	$(CC) $(CFLAGS) -I $(INCS_DIR) -o $@ -c $<

CC = gcc

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	rm -rf $(OBJS_DIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
