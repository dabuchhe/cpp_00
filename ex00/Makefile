#------------------------------------------------#
#					FILES						 #
#------------------------------------------------#
NAME		= Megaphone
SRC_FILES	= megaphone

#------------------------------------------------#
#					DIRECTORY					 #
#------------------------------------------------#
OBJ_DIR		= .build/

#------------------------------------------------#
#					PATHS						 #
#------------------------------------------------#
SRC			= $(addsuffix .cpp, $(SRC_FILES))
OBJ			= $(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))

#------------------------------------------------#
#					COMMANDS					 #
#------------------------------------------------#
CC			= c++ -std=c++98
RM			= rm -rf

#------------------------------------------------#
#					FLAGS						 #
#------------------------------------------------#
CFLAGS		= -Wall -Wextra -Werror
MAKEFLAGS	+= --no-print-directory
#------------------------------------------------#
#					RULES						 #
#------------------------------------------------#

all: $(NAME)

$(NAME): $(OBJ) | $(OBJ_DIR)
	@echo "\n$(MAGENTA)$(BOLD)💻 Compiling executable...$(RESET)"
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME) 
	@echo "$(GREEN)$(BOLD)\n✅ Compilation successful!$(RESET)"
	@echo "$(CYAN)    └─ Ready to run: ./$(NAME)\n$(RESET)"

$(OBJ_DIR)%.o: %.cpp Makefile | $(OBJ_DIR)
	@echo "  → Compiling $(YELLOW)$<$(RESET)"
	@$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR):
	@mkdir -p $@

clean:
	@$(RM) $(OBJ_DIR)
	@echo "$(MAGENTA)$(BOLD)🧹 Cleaning up project files...$(RESET)"
	@echo "$(CYAN)    ├─ Removed object files, and dependencies$(RESET)"
	@echo "$(CYAN)    └─ Cleaned build directory: $(OBJ_DIR)$(RESET)"

fclean: clean
	@$(RM)
	@$(RM) $(NAME)
	@echo "$(GREEN)$(BOLD)\n🗑️  Full clean-up completed:$(RESET)"
	@echo "$(CYAN)    └─ Executable removed: ./$(NAME)\n$(RESET)"

re: fclean all

fclean-all: fclean

clean-all: clean

run: all
	@echo "$(BOLD)🚀 Running:$(RESET) ./$(NAME) $(ARGS)"
	@./$(NAME) $(ARGS)

.PHONY: all clean fclean re run

#------------------------------------------------#
#					COLORS						 #
#------------------------------------------------#
RED		= \033[0;31m
GREEN	= \033[0;32m
YELLOW	= \033[1;33m
BLUE	= \033[0;34m
CYAN	= \033[0;36m
MAGENTA	= \033[0;35m
WHITE	= \033[1;37m
BOLD    = \033[1m
RESET   = \033[0m


