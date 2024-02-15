# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: utaydin <utaydin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/12 20:14:26 by utaydin           #+#    #+#              #
#    Updated: 2024/02/12 21:52:35 by utaydin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq
SRC_DIR = ./srcs/
RM = /bin/rm -f

FUNCTS = main functions file create_matrix
OPTIONS = -I includes
FLAGS = -Wall -Wextra -Werror

CFILES = $(patsubst %, $(SRC_DIR)%.c, $(FUNCTS))
OBJECTS = $(patsubst %, %.o, $(FUNCTS))

.PHONY: all $(NAME) $(OBJECTS) clean fclean re

all: $(NAME)

$(OBJECTS):
	@gcc $(OPTIONS) $(FLAGS) -c $(CFILES)

$(NAME): $(OBJECTS)
	@gcc $(OPTIONS) $(FLAGS) $(OBJECTS) -o $(NAME)

clean:
	@$(RM) $(OBJECTS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all