# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: danpalac <danpalac@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/21 12:39:03 by danpalac          #+#    #+#              #
#    Updated: 2025/08/21 12:39:08 by danpalac         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = diamondtrap
OBJDIR = obj
HEADER_DIR = inc/
SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp
OBJS = $(patsubst %.cpp,$(OBJDIR)/%.o,$(SRCS))

all: $(NAME)
$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
$(OBJDIR)/%.o: %.cpp
	@mkdir -p $(OBJDIR)
	$(CXX) $(CXXFLAGS) -I$(HEADER_DIR) -c $< -o $@
clean: ; rm -rf $(OBJDIR)
fclean: clean ; rm -f $(NAME)
re: fclean all
.PHONY: all clean fclean re
