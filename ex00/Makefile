# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shurtado <shurtado@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/07 01:23:11 by shurtado          #+#    #+#              #
#    Updated: 2025/02/25 19:04:40 by shurtado         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	Animals
CC			=	c++
CPPFLAGS	=	-g -Wall -Werror -Wextra -std=c++98 -MMD -MP

CLASSES		=	Animal Cat Dog WrongAnimal WrongCat

SRC			=	$(addprefix src/, $(foreach class, $(CLASSES), $(class)/$(class).cpp) main.cpp)

OBJS		=	$(SRC:%.cpp=obj/%.o)
DEPS		=	$(OBJS:.o=.d)

all: $(NAME)

$(CUTE):
	$(MAKE) -C $(CUTE_DIR)

$(NAME): $(OBJS) $(CUTE)
	$(CC) $(INCLUDES) $(CPPFLAGS) -o $@ $^ $(LDFLAGS)

obj/%.o: %.cpp
	@mkdir -p $(dir $@)
	$(CC) $(INCLUDES) $(CPPFLAGS) -c $< -o $@


clean:
	rm -rf obj


fclean: clean
	rm -f $(NAME)

re: fclean all

-include $(DEPS)

.PHONY: all clean fclean re
