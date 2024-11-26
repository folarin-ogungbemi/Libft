# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: foogungb <foogungb@student.42berlin.d      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/14 16:50:36 by foogungb          #+#    #+#              #
#    Updated: 2024/11/21 16:32:50 by foogungb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# _*_Makefile to automate the compilation process.

# Define variables
CC = cc
CFLAGS = -Wall -Werror -Wextra
NAME = libft.a
TARGET = program

# dir
OBJ = objs

# Files
SRC_FILES = $(shell find ./ -type f -name "*.c")
OBJ_FILES = $(SRC_FILES:%.c=$(OBJ)/%.o)

# Set default target
all: $(NAME)

# Create the static library from the obj files
$(NAME): $(OBJ_FILES)
	@ar rcs $@ $^
	@echo "Compiled $@ Successfully."

$(TARGET): $(OBJ_FILES)
	$(CC) $(CFLAGS) $(OBJ_FILES) -o $@
	@echo "Compiled $@ Successfully."

# Compile each source file into object file
$(OBJ)/%.o: %.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@
	@echo "Compiled $< to $@ Successfully."

print:
	@echo "SRC_FILES: $(SRC_FILES)"
	@echo "OBJ_FILES: $(OBJ_FILES)"
	@echo "TARGET: $(TARGET)"
	@echo "NAME: $(NAME)"

run: $(TARGET)
	./$(TARGET)

clean:
	@rm -rf $(OBJ)
	@echo "$(OBJ) files removed."

fclean: clean
	@rm -f $(NAME) $(TARGET)
	@echo "$(NAME) & $(TARGET) files removed."

# Rebuild everything from scratch
re: fclean all

# Phony targets to avoid conflicts with filenames
.PHONY: all clean fclean re
