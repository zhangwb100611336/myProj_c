sub_dir=lshellcore
all:checkdir exesubdir

exesubdir:$(sub_dir)
	$(MAKE) -C $(CODE_DIR)/$<
	
checkdir:$(sub_dir)
	-mkdir -p $(TARGET_DIR)/$<
