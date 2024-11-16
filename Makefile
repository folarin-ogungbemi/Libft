#__Makefile__

CC = cc
CFLAGS = -Wall -Werror -Wextra -Iincludes
SRC = srcs
OBJ = objs
TARGET = program

SRC_FILES = $(shell find $(SRC) -type f -name "*.c")
OBJ_FILES = $(SRC_FILES:$(SRC)/%.c main.c=$(OBJ)/%.o) main.o

all: $(TARGET)

$(TARGET): $(OBJ_FILES)
	$(CC) $(CFLAGS) $^ -o $@
	@echo "$(TARGET) Successfully created"

$(OBJ)/%.o: $(SRC)/%.c
	@echo "Building $@ from $<"
	@mkdir -p $(OBJ)
	$(CC) $(CFLAGS) -c $< -o $@
	@echo "Compiled $< to $@"

main.o: main.c
	@echo "Building $@ from $<"
	$(CC) $(CFLAGS) -c $< -o $@
	@echo "Compiled $< to $@"

print:
	@echo "OBJ: $(OBJ)"
	@echo "SRC_FILES: $(SRC_FILES)"
	@echo "OBJ_FILES: $(OBJ_FILES)"

clean:
	@rm -rf $(OBJ) main.o

fclean: clean
	@rm -f $(TARGET)

re: fclean all

.PHONY: all clean fclean re
