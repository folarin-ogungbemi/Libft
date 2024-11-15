#__Makefile__

CC = cc
CFLAGS = -Wall -Werror -Wextra -MMD -MP -Iincludes
SRC = srcs
OBJ = objs
TARGET = program

SRC_FILES = $(shell find $(SRC) -type f -name "*.c")
OBJ_FILES = $(SRC_FILES:$(SRC)/%.c=$(OBJ)/%.o)
DEP_FILES = $(OBJ_FILES:.o=.d)

all: $(TARGET)

$(TARGET): $(OBJ_FILES)
	$(CC) $(CFLAGS) $^ -o $@
	@echo "$(TARGET) Successfully created"

$(OBJ)/%.o: $(SRC)/%.c
	@echo "Building $@ from $<"
	@mkdir -p $(OBJ)
	$(CC) $(CFLAGS) -c $< -o $@
	@echo "Compiled $< to $@"

-include $(DEP_FILES)

print:
	@echo "OBJ: $(OBJ)"
	@echo "SRC_FILES: $(SRC_FILES)"
	@echo "OBJ_FILES: $(OBJ_FILES)"
	@echo "DEP_FILES: $(DEP_FILES)"

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -f $(TARGET)
