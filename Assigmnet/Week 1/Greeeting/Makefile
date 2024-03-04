# Define the compiler and flags
CC := gcc
CFLAGS := -Wall -Wextra -g

# Define the source and build directories
SRC_DIR := src
BUILD_DIR := build
LIB_DIR := lib

# Get a list of all the source files
SRCS := $(wildcard $(SRC_DIR)/*.c)

# Generate a list of object files by replacing the .c extension with .o
OBJS := $(patsubst $(SRC_DIR)/%.c,$(BUILD_DIR)/%.o,$(SRCS))

# Define the target executable
TARGET := $(BUILD_DIR)/executable

# Default target
all: $(TARGET)

# Rule to compile each source file into an object file
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

# Rule to link all the object files into the target executable
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

# Rule to compile the source file into the object file for the dynamic library
$(BUILD_DIR)/greeting.o: $(SRC_DIR)/greeting.c
	$(CC) $(CFLAGS) -c $< -o $@

# Rule to create dynamic library
$(LIB_DIR)/libgreeting.so: $(BUILD_DIR)/greeting.o
	$(CC) -shared -o $@ $<

# Create the build directory if it does not exist
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

# Create the lib directory if it does not exist
$(LIB_DIR):
	mkdir -p $(LIB_DIR)

# Clean target to remove all generated files
clean:
	rm -rf $(BUILD_DIR)

.PHONY: all clean