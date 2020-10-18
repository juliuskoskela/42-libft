# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/01 00:14:29 by jkoskela          #+#    #+#              #
#    Updated: 2020/10/16 22:17:18 by jkoskela         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAG = -Wall -Wextra -Werror

NAME = libft.a

FILES=$(shell find . -name "*.c")

OBJ=$(patsubst %.c, %.o, $(FILES))

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "$(NAME) created!"

%.o: %.c
	@gcc $(FLAG) -c $< -o $@

clean:
	@rm -f $(OBJ)
	@echo "$(NAME) cleaned!"

fclean:
	@rm -f $(OBJ)
	@rm -f $(NAME)
	@echo "$(NAME) fcleaned!"
ifneq (,$(wildcard .DS_Store))
	rm -r .DS_Store
	@echo "Deleted .DS_Store in $(NAME)"
endif

re: fclean all

.PHONY: all, clean, fclean, re
