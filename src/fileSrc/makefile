# ===============================
# Makefile for 4-bit Cipher
# ===============================

# Compiler Defines which compiler to use
CC = gcc

# Compiler flags Compilation options — you can change them easily here
#| Flag        | Meaning                           | Example                         |
#| ----------- | --------------------------------- | ------------------------------- |
#| `-Wall`     | Enable all common warnings        | `gcc -Wall main.c`              |
#| `-Wextra`   | Enable extra warnings             | `gcc -Wall -Wextra main.c`      |
#| `-Werror`   | Treat warnings as errors          | `gcc -Wall -Werror main.c`      |
#| `-g`        | Add debugging info (for `gdb`)    | `gcc -g main.c -o main`         |
#| `-O2`       | Optimize for speed (normal level) | `gcc -O2 main.c`                |
#| `-O3`       | Aggressive optimization           | `gcc -O3 main.c`                |
#| `-std=c11`  | Use a specific C standard         | `gcc -std=c11 main.c`           |
#| `-pedantic` | Enforce strict ISO C rules        | `gcc -std=c11 -pedantic main.c` |
CFLAGS = -Wall -Wextra -O2

SRC_EN = fileEncrypting.c ../../LinkedList/LinkedListExperiment.c# List of source files SRC / OBJ Lists source and object files
OBJ_EN = $(SRC_EN:.c=.o)# Object files (same names but .o extension) — make automatically replaces .c → .o
TARGET_EN = ../../bin\fileEncrypt.exe# Output executable name

SRC_DE = fileDecrypting.c ../../LinkedList/LinkedListExperiment.c
OBJ_DE = $(SRC_DE:.c=.o)
TARGET_DE = ../../bin\fileDecrypt.exe

# --- Combined Variables ---
ALL_OBJ = $(OBJ_EN) $(OBJ_DE)
ALL_TARGETS = $(TARGET_EN) $(TARGET_DE)

# Default rule: build ALL targets The default build target (when you just type make)
all: $(ALL_TARGETS)

# Linking Rule 1: Build the Cipher Executable
$(TARGET_EN): $(OBJ_EN)#How to link object files into one executable
	$(CC) $(CFLAGS) -o $@ $^

# Linking Rule 2: Build the Utility Executable
$(TARGET_DE): $(OBJ_DE)
	$(CC) $(CFLAGS) -o $@ $^

## List of source files SRC / OBJ Lists source and object files
#SRC = fileDecrypting.c ../../LinkedList/LinkedListExperiment.c
#
## Object files (same names but .o extension) — make automatically replaces .c → .o
#OBJ = $(SRC:.c=.o)
#
## Output executable name
#TARGET = ../../bin\fileDecrypt.exe

# Default rule: build the program all The default build target (when you just type make)
#all: $(TARGET)

# Link object files into final executable How to link object files into one executable
#$(TARGET): $(OBJ)
#	$(CC) $(CFLAGS) -o $@ $^

# Compile each .c file into a .o file Automatic variables in Make: $@ = target, $^ = dependencies, $< = first dependency
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up all generated files Command to remove build files
clean:
	del /F /Q $(subst /,\,$(ALL_OBJ)) $(subst /,\,$(ALL_TARGETS))
#	rm -f $(OBJ) $(TARGET)

# Optional: test run (custom command)  Custom shortcut to compile and run in one step
#run: $(TARGET)
#	./$(TARGET) encrypt -k 0x9F -i input.txt -o output.bin

# Phony targets (not real files) Declares that all, clean, and run are not filenames
.PHONY: all clean


#| Command      | What it does                                       |
#| ------------ | -------------------------------------------------- |
#| `make`       | Compiles everything → produces `mycipher`          |
#| `make run`   | Builds (if needed) and runs `./mycipher encrypt …` |
#| `make clean` | Deletes compiled object files and the executable   |
