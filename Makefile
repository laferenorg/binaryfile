# Compiler
CXX      = g++

# SETTINGS
OPTIMIZE = -ffast-math -O2 -g -Ofast -Os -Og
OUTPUT   = test

all: @check_folder @compile_check

@check_folder:
  @if [ ! -d $(OUTPUT_SRC) ]; then \
		mkdir $(OUTPUT); \
	fi

@compile_check:
  $(CXX) example/adding_data.cpp $(OPTIMIZE) -o $(OUTPUT)/adding_data.out
  $(CXX) example/delete_data.cpp $(OPTIMIZE) -o $(OUTPUT)/delete_data.out   
  $(CXX) example/read_into_memory.cpp $(OPTIMIZE) -o $(OUTPUT)/read_into_memory.out   
  $(CXX) example/save_into_file.cpp $(OPTIMIZE) -o $(OUTPUT)/save_into_file.out   
  $(CXX) example/type_and_length.cpp $(OPTIMIZE) -o $(OUTPUT)/type_and_length.out   
  $(CXX) example/update_data.cpp $(OPTIMIZE) -o $(OUTPUT)/update_data.out   
