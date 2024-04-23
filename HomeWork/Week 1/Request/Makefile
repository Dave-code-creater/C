# Compiler
CC = gcc

# Directories
SRC_DIR = src
BUILD_DIR = build
TEST_DIR = test

# Source files
SRC_FILES = $(wildcard $(SRC_DIR)/*.c)
TEST_FILES = $(wildcard $(TEST_DIR)/*.c)

# Object files
OBJ_FILES = $(patsubst $(SRC_DIR)/%.c,$(BUILD_DIR)/%.o,$(SRC_FILES))
OBJ_FILES_TEST = $(patsubst $(TEST_DIR)/%.c,$(BUILD_DIR)/%.o,$(TEST_FILES)) # Change object file path for test files

# Executables
EXECUTABLE = $(BUILD_DIR)/testing
TEST_EXECUTABLE = $(BUILD_DIR)/test

# Default target
all: $(EXECUTABLE) $(TEST_EXECUTABLE)

# Compile source files into object files
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) -c $< -o $@

# Compile test files into object files
$(BUILD_DIR)/%.o: $(TEST_DIR)/%.c
	$(CC) -c $< -o $@

# Link object files into executables
$(EXECUTABLE): $(OBJ_FILES)
	$(CC) $^ -o $@

$(TEST_EXECUTABLE): $(OBJ_FILES_TEST)
	$(CC) $^ -o $@

# Create a directory if does not exist
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

# Clean build directory
clean:
	rm -rf $(BUILD_DIR)
