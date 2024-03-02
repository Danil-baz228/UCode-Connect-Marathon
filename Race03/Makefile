CLIENT=matrix_rain
SRC_DIR=src
INC_DIR=inc
OBJ_DIR=obj
SRC_FILES=$(wildcard $(SRC_DIR)/*.c)
OBJ_FILES=$(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRC_FILES))
CC=clang
CFLAGS=-I$(INC_DIR) -Wall -Wextra -Werror
LDFLAGS=-lncurses

# Targets
all: $(CLIENT)

$(CLIENT): $(OBJ_FILES)
	$(CC) $(CFLAGS) $^ -o $@ $(LDFLAGS)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

uninstall:
	rm -rf $(CLIENT) $(OBJ_DIR)

clean:
	rm -rf $(OBJ_DIR)/*.o

reinstall: uninstall all

.PHONY: all uninstall clean reinstall

