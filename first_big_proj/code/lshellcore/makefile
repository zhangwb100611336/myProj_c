curpath=$(CODE_DIR)/lshellcore
curtargetpath=$(TARGET_DIR)/lshellcore
lshellbin=$(BIN_DIR)/lshell
sourcefile=$(shell find ./ -name "*.c"|cut -c3-)

source=$(patsubst %,$(curpath)/%,$(sourcefile))
target=$(patsubst %.c,$(curtargetpath)/%.o,$(sourcefile))
deps=$(patsubst %.o,%.d,$(target))
ctargetpath=$(foreach file,$(target),$(shell dirname $(file)))
.PHONY:all  

-include $(deps)
all:checkdir build echo

build:$(lshellbin) $(deps)

$(lshellbin):$(target)
	    @echo "bigin build target...."
	    $(CC) -o $^ -o $@

$(target):$(source)
	    @echo "bigin build source ...."
	    $(CC) -c $< -o $@
$(deps):$(source)
	@echo "begin build deps ...."
	$(CC) -M $<  >$@
echo:
	@echo $(curpath)
	@echo $(sourcefile)
	@echo $(source)
	@echo $(target)
	@echo $(ctargetpath)
	@echo $(deps)
checkdir:
	@echo $(foreach file,$(ctargetpath),$(shell mkdir -p $(file)))

#all:$(main_bin)

#$(main_bin):$(main_target)
#	CC CFLAGS 
