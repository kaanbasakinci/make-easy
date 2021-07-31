# Generic C source code MAKEFILE. \
By default it uses specific file hierarchy, you may need to change rules or variables. \
Those with an exclamation point (!) are mandatory fields. \

#For detailed information https://github.com/kaanbasakinci/make-easy.



# Makefile directory
MAKE_DIR = $(dir $(abspath $(lastword $(MAKEFILE_LIST))))

# Subdirectories
SRC_DIR = $(MAKE_DIR)src
OBJ_DIR = $(SRC_DIR)/obj
INC_DIR = $(MAKE_DIR)inc
BIN_DIR = $(MAKE_DIR)bin

# Custom libraries directory with gnu make parameter '-I'
INC = -I$(INC_DIR)
#! Program name
TARGET =

# Compiler
CXX = g++
#! Compiler flags (recomended: -Wall -g)
CXXFLAGS =

# Debug directory (optional)
DEBUG_DIR = $(MAKE_DIR).debug
# Debug command file
DEBUG = $(DEBUG_DIR)/.debug
# Program argumenst (if not leave blank)
DEBUG_ARGS =

# Source files
SRCS := $(wildcard $(SRC_DIR)/*.cpp)
# Object files
OBJS := $(SRCS:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)

# Leftover files from make-easy
LEFTOVERS := $(wildcard .*_time_*.txt)

usage:
	@echo $(USAGE_MSG)


# Build binary
build: $(OBJS)
	@echo $$(date +%s%3N) > .strt_time_$@.txt
	$(CXX) $(INC) $(CXXFLAGS) -o $(BIN_DIR)/$(TARGET) $^
	@echo $$(date +%s%3N) > .fnsh_time_$@.txt
	@printf '\n\e[1;32m*** Target: build "$(TARGET)" finished in %s.%s%s%s seconds. ***\e[0m\n\n' $$(( $$(( $$(cat  .fnsh_time_$@.txt)-$$(cat  .strt_time_$@.txt) ))/1000 )) $$(( $$(( $$(cat  .fnsh_time_$@.txt)-$$(cat  .strt_time_$@.txt) ))/100 - $$(( $$(cat  .fnsh_time_$@.txt)-$$(cat  .strt_time_$@.txt) ))/1000*10 )) $$(( $$(( $$(cat  .fnsh_time_$@.txt)-$$(cat  .strt_time_$@.txt) ))/10 - $$(( $$(cat  .fnsh_time_$@.txt)-$$(cat  .strt_time_$@.txt) ))/1000*100 - ($$(( $$(cat  .fnsh_time_$@.txt)-$$(cat  .strt_time_$@.txt) ))/100 - $$(( $$(cat  .fnsh_time_$@.txt)-$$(cat  .strt_time_$@.txt) ))/1000*10)*10 )) $$(( $$(( $$(cat  .fnsh_time_$@.txt)-$$(cat  .strt_time_$@.txt) )) - $$(( $$(cat  .fnsh_time_$@.txt)-$$(cat  .strt_time_$@.txt) ))/1000*1000 - ($$(( $$(cat  .fnsh_time_$@.txt)-$$(cat  .strt_time_$@.txt) ))/100 - $$(( $$(cat  .fnsh_time_$@.txt)-$$(cat  .strt_time_$@.txt) ))/1000*10)*100 - ($$(( $$(cat  .fnsh_time_$@.txt)-$$(cat  .strt_time_$@.txt) ))/10 - $$(( $$(cat  .fnsh_time_$@.txt)-$$(cat  .strt_time_$@.txt) ))/1000*100 - ($$(( $$(cat  .fnsh_time_$@.txt)-$$(cat  .strt_time_$@.txt) ))/100 - $$(( $$(cat  .fnsh_time_$@.txt)-$$(cat  .strt_time_$@.txt) ))/1000*10)*10)*10 ))
	@$(MAKE) -s clean-leftover
	@printf '\n\tINFO(size/file): '
	@ls -sh $(BIN_DIR)/$(TARGET)


$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@echo $$(date +%s%3N) > ._strt_time_$(notdir $<).txt
	$(CXX) $(INC) $(CXXFLAGS) -c -o $@ $<
	@echo $$(date +%s%3N) > ._fnsh_time_$(notdir $<).txt
	@printf '\n\e[1;32m*** Target: compile "$(notdir $<)" finished in %s.%s%s%s seconds. ***\e[0m\n\n' $$(( $$(( $$(cat  ._fnsh_time_$(notdir $<).txt)-$$(cat  ._strt_time_$(notdir $<).txt) ))/1000 )) $$(( $$(( $$(cat  ._fnsh_time_$(notdir $<).txt)-$$(cat  ._strt_time_$(notdir $<).txt) ))/100 - $$(( $$(cat  ._fnsh_time_$(notdir $<).txt)-$$(cat  ._strt_time_$(notdir $<).txt) ))/1000*10 )) $$(( $$(( $$(cat  ._fnsh_time_$(notdir $<).txt)-$$(cat  ._strt_time_$(notdir $<).txt) ))/10 - $$(( $$(cat  ._fnsh_time_$(notdir $<).txt)-$$(cat  ._strt_time_$(notdir $<).txt) ))/1000*100 - ($$(( $$(cat  ._fnsh_time_$(notdir $<).txt)-$$(cat  ._strt_time_$(notdir $<).txt) ))/100 - $$(( $$(cat  ._fnsh_time_$(notdir $<).txt)-$$(cat  ._strt_time_$(notdir $<).txt) ))/1000*10)*10 )) $$(( $$(( $$(cat  ._fnsh_time_$(notdir $<).txt)-$$(cat  ._strt_time_$(notdir $<).txt) )) - $$(( $$(cat  ._fnsh_time_$(notdir $<).txt)-$$(cat  ._strt_time_$(notdir $<).txt) ))/1000*1000 - ($$(( $$(cat  ._fnsh_time_$(notdir $<).txt)-$$(cat  ._strt_time_$(notdir $<).txt) ))/100 - $$(( $$(cat  ._fnsh_time_$(notdir $<).txt)-$$(cat  ._strt_time_$(notdir $<).txt) ))/1000*10)*100 - ($$(( $$(cat  ._fnsh_time_$(notdir $<).txt)-$$(cat  ._strt_time_$(notdir $<).txt) ))/10 - $$(( $$(cat  ._fnsh_time_$(notdir $<).txt)-$$(cat  ._strt_time_$(notdir $<).txt) ))/1000*100 - ($$(( $$(cat  ._fnsh_time_$(notdir $<).txt)-$$(cat  ._strt_time_$(notdir $<).txt) ))/100 - $$(( $$(cat  ._fnsh_time_$(notdir $<).txt)-$$(cat  ._strt_time_$(notdir $<).txt) ))/1000*10)*10)*10 ))

# Compile, link, run
run: build
	@printf '\n>Executing file: $(TARGET) \n\n'
	@echo $$(date +%s%3N) > .strt_time_$@.txt
	@$(BIN_DIR)/$(TARGET)	$(DEBUG_ARGS)
	@echo $$(date +%s%3N) > .fnsh_time_$@.txt
	@printf '\n\e[1;32m*** Target: $@ "$(TARGET)" finished in %s.%s%s%s seconds. ***\e[0m\n\n' $$(( $$(( $$(cat  .fnsh_time_$@.txt)-$$(cat  .strt_time_$@.txt) ))/1000 )) $$(( $$(( $$(cat  .fnsh_time_$@.txt)-$$(cat  .strt_time_$@.txt) ))/100 - $$(( $$(cat  .fnsh_time_$@.txt)-$$(cat  .strt_time_$@.txt) ))/1000*10 )) $$(( $$(( $$(cat  .fnsh_time_$@.txt)-$$(cat  .strt_time_$@.txt) ))/10 - $$(( $$(cat  .fnsh_time_$@.txt)-$$(cat  .strt_time_$@.txt) ))/1000*100 - ($$(( $$(cat  .fnsh_time_$@.txt)-$$(cat  .strt_time_$@.txt) ))/100 - $$(( $$(cat  .fnsh_time_$@.txt)-$$(cat  .strt_time_$@.txt) ))/1000*10)*10 )) $$(( $$(( $$(cat  .fnsh_time_$@.txt)-$$(cat  .strt_time_$@.txt) )) - $$(( $$(cat  .fnsh_time_$@.txt)-$$(cat  .strt_time_$@.txt) ))/1000*1000 - ($$(( $$(cat  .fnsh_time_$@.txt)-$$(cat  .strt_time_$@.txt) ))/100 - $$(( $$(cat  .fnsh_time_$@.txt)-$$(cat  .strt_time_$@.txt) ))/1000*10)*100 - ($$(( $$(cat  .fnsh_time_$@.txt)-$$(cat  .strt_time_$@.txt) ))/10 - $$(( $$(cat  .fnsh_time_$@.txt)-$$(cat  .strt_time_$@.txt) ))/1000*100 - ($$(( $$(cat  .fnsh_time_$@.txt)-$$(cat  .strt_time_$@.txt) ))/100 - $$(( $$(cat  .fnsh_time_$@.txt)-$$(cat  .strt_time_$@.txt) ))/1000*10)*10)*10 ))
	@$(MAKE) -s clean-leftover

# Debug automation, uses gdb
debug: build
ifeq ("$(wildcard $(DEBUG_DIR))", "")
	@mkdir $(DEBUG_DIR)
endif
ifeq (,$(wildcard $(DEBUG)))
	@touch $(DEBUG)
	@echo b main > $(DEBUG)
	@echo r $(DEBUG_ARGS) >> $(DEBUG)
	@echo layout src >> $(DEBUG)
endif
	gdb -x $(DEBUG) $(BIN_DIR)/$(TARGET)
	clear

clean-leftover:
ifneq ("$(wildcard $(LEFTOVERS))", "")
	@rm $(LEFTOVERS)
else
	@echo "Leftover file(s) not found ..."
endif


# Remove object files
clean-obj:
ifneq ("$(wildcard $(OBJS))", "")
	@rm $(OBJ_DIR)/*.o
else
	@echo "Object file(s) not found ..."
endif

# Remove executable file
clean-build: clean-obj
ifneq ("$(wildcard $(BIN_DIR)/$(TARGET))", "")
	@rm $(BIN_DIR)/$(TARGET)
else
	@echo "Executable file not found ..."
endif	

# Remove debug file
clean-debug:
ifneq ("$(wildcard $(DEBUG_DIR))", "")
	@rm -r $(DEBUG_DIR)
	clear
	@echo "Debug file removed."
else
	@echo "Debug file not found ..."
endif

# Print Makefile variables to debug bugs if any
print-%  : ; @echo $* = $($*)


USAGE_MSG  = "\nGeneric C source code MAKEFILE.\n"\
"Specify the make rule, or help messages will printed ...\n\n"\
"Available Rules:\n"\
"make (default), make usage -> prints usage messages.\n"\
"make build                 -> build project, output file will be executable.\n"\
"make run                   -> build executable and run.\n"\
"make debug                 -> build executable and start gdb debugging session with previously set arguments in Makefile.\n"\
"make clean-obj             -> remove object files.\n"\
"make clean-build           -> remove previous build files.\n"\
"make clean-debug           -> remove debug command file.\n"\
