# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shurtado <shurtado@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/07 01:23:11 by shurtado          #+#    #+#              #
#    Updated: 2025/02/25 19:56:06 by shurtado         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	Animals
CC			=	c++
CPPFLAGS	=	-g -Wall -Werror -Wextra -std=c++98 -MMD -MP -fsanitize=address -pedantic

CLASSES		=	Animal Cat Dog Brain
SRC			=	$(addprefix src/, $(foreach class, $(CLASSES), $(class)/$(class).cpp) main.cpp)

OBJS		=	$(SRC:%.cpp=obj/%.o)
DEPS		=	$(OBJS:.o=.d)

all: $(NAME)


$(NAME): $(OBJS)
	$(CC) $(INCLUDES) $(CPPFLAGS) -o $@ $^ $(LDFLAGS)

obj/%.o: %.cpp Makefile
	@mkdir -p $(dir $@)
	$(CC) $(INCLUDES) $(CPPFLAGS) -c $< -o $@


clean:
	rm -rf obj


fclean: clean
	rm -f $(NAME)

re: fclean all

-include $(DEPS)

.PHONY: all clean fclean re
