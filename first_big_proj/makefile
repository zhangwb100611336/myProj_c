CC = gcc
CFLAGS= -g
TOP_DIR := $(PWD)
TARGET_DIR := $(TOP_DIR)/target
CODE_DIR := $(TOP_DIR)/code
BIN_DIR := $(TOP_DIR)/bin
export TARGET_DIR CODE_DIR BIN_DIR CC CFLAG

.PHONY:all
all:checkdir exesubdir

exesubdir:$(CODE_DIR)
	 make -C $<

checkdir:
	-mkdir -p $(BIN_DIR)
	-mkdir -p $(TARGET_DIR)
clean:
	rm -rf $(BIN_DIR)
	rm -rf $(TARGET_DIR)
echo:
	@echo $(TOP_DIR)
	@echo $(TARGET_DIR)
	@echo $(CODE_DIR)

