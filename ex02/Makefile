CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = fragtrap
OBJDIR = obj
HEADER_DIR = inc/
SRCS = main.cpp ClapTrap.cpp FragTrap.cpp
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
