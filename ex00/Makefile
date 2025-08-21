# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: usuario <usuario@student.42.fr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/21 12:00:00 by usuario           #+#    #+#              #
#    Updated: 2025/08/21 12:07:09 by usuario          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = claptrap
OBJDIR = obj
HEADER_DIR = inc/

SRCS = main.cpp ClapTrap.cpp
OBJS = $(patsubst %.cpp,$(OBJDIR)/%.o,$(SRCS))

all: $(NAME)

$(NAME): $(OBJS)
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
	@echo "✔ Ejecutable $(NAME) creado."

$(OBJDIR)/%.o: %.cpp
	@mkdir -p $(OBJDIR)
	$(CXX) $(CXXFLAGS) -I$(HEADER_DIR) -c $< -o $@
	@echo "✔ Compilado $<"

clean:
	@rm -rf $(OBJDIR)
	@echo "🗑 Objetos eliminados."

fclean: clean
	@rm -f $(NAME)
	@echo "🗑 Ejecutable eliminado."

re: fclean all

.PHONY: all clean fclean re
