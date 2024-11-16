#__Makefile__

CC = cc
CFLAGS = -Wall -Werror -Wextra -Iincludes
LDFLAGS = -lcheck -pthread -lm -lrt -lsubunit
SRC = srcs
TEST = tests
OBJ = objs

TARGET = program
TEST_TARGET = test_program

SRC_FILES = $(shell find $(SRC) -type f -name "*.c")
TEST_FILES = $(shell find $(TEST) -type f -name "*.c")
OBJ_FILES = $(SRC_FILES:$(SRC)/%.c=$(OBJ)/%.o)
TEST_OBJ_FILES = $(TEST_FILES:$(TEST)/%.c=$(OBJ)/%.o)

all: $(TARGET) $(TEST_TARGET)

$(TARGET): $(OBJ_FILES) main.o
	$(CC) $(CFLAGS) $(OBJ_FILES) main.o -o $@
	@echo "$(TARGET) Successfully created"

$(TEST_TARGET): $(OBJ_FILES) $(TEST_OBJ_FILES) main_test.o
	$(CC) $(CFLAGS) -DRUN_TESTS $(OBJ_FILES) $(TEST_OBJ_FILES) main_test.o -o $@ $(LDFLAGS)
	@echo "$(TEST_TARGET) Successfully created"

$(OBJ)/%.o: $(SRC)/%.c
	@echo "Building $@ from $<"
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@
	@echo "Compiled $< to $@"

$(OBJ)/%.o: $(TEST)/%.c
	@echo "Building $@ from $<"
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -DRUN_TESTS -c $< -o $@
	@echo "Compiled $< to $@"

main.o: main.c
	@echo "Building $@ from $<"
	$(CC) $(CFLAGS) -c $< -o $@
	@echo "Compiled $< to $@"

main_test.o: main_test.c
	@echo "Building $@ from $<"
	$(CC) $(CFLAGS) -DRUN_TESTS -c $< -o $@
	@echo "Compiled $< to $@"

print:
	@echo "OBJ: $(OBJ)"
	@echo "SRC_FILES: $(SRC_FILES)"
	@echo "OBJ_FILES: $(OBJ_FILES)"
	@echo "TEST_FILES: $(TEST_FILES)"
	@echo "TEST_OBJ_FILES: $(TEST_OBJ_FILES)"

clean:
	@rm -rf $(OBJ) main.o main_test.o
	@echo "Cleaned up all object files"

fclean: clean
	@rm -f $(TARGET) $(TEST_TARGET)
	@echo "Cleaned up $(TARGET) $(TEST_TARGET) successfully"
re: fclean all

test: $(TEST_TARGET)
	./$(TEST_TARGET)

run: $(TARGET)
	./$(TARGET)
.PHONY: all clean fclean re
