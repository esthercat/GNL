# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: esmoreau <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/16 17:47:55 by esmoreau          #+#    #+#              #
#    Updated: 2018/11/16 17:47:56 by esmoreau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= libft.a
SRC 	= ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c\
ft_isdigit.c ft_isprint.c ft_memalloc.c ft_memccpy.c ft_memchr.c ft_memcmp.c\
ft_memcpy.c ft_memdel.c ft_memmove.c ft_memset.c ft_putchar.c ft_putchar_fd.c\
ft_putendl.c ft_putendl_fd.c ft_putnbr.c ft_putnbr_fd.c ft_putstr.c\
ft_putstr_fd.c ft_strcat.c ft_strchr.c ft_strclr.c ft_strcmp.c ft_strcpy.c\
ft_strdel.c ft_strdup.c ft_strequ.c ft_striter.c ft_striteri.c ft_strjoin.c\
ft_strlcat.c ft_strlen.c ft_strmap.c ft_strmapi.c ft_strncat.c ft_strncmp.c\
ft_strncpy.c ft_strnequ.c ft_strnew.c ft_strnstr.c ft_strrchr.c ft_strstr.c\
ft_strsub.c ft_strtrim.c ft_tolower.c ft_toupper.c ft_itoa.c ft_strsplit.c\
ft_lstmap.c ft_lstnew.c ft_lstdel.c ft_lstadd.c ft_lstiter.c ft_lstdelone.c\
ft_itoa_base.c ft_exit.c ft_strccpy.c ft_str_tolower.c ft_free_doubletab.c\

FLAGS 	= -Werror -Wall -Wextra
CC 		= gcc

OBJ = $(SRC:.c=.o)
	CL=\x1b[35m
	GREEN=\033[1;32m
	RED=\033[1;31m
	CL2=\x1b[36m
	NC=\033[0m

all: $(NAME)

%.o: %.c
		gcc $(FLAGS) -c -o $@ $<

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "$(GREEN)[✓]$(NC)$(CL) Objects of libft compiled$(NC)"

clean:
	@/bin/rm -f $(OBJ)
	@echo "$(RED)[-]$(NC)$(CL2) Objects of $(NAME) cleaned$(NC)"

fclean: clean
	@/bin/rm -f $(NAME)
	@echo "$(RED)[-]$(NC)$(CL2) Library $(NAME) cleaned$(NC)"

re: fclean all
