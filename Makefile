options = -std=gnu++17 -Wall -Wextra -DLOCAL
compiler = g++-11

program : main.cpp
	$(compiler) $(options) -O2 $< -o $@

run : program
	./program

clean:
	rm -rf ./program ./program_debug ./program_debug.dSYM

debug: main.cpp
	$(compiler) $(options) -g -O0 $< -o program_debug
	lldb -f ./program_debug

.PHONY : run clean debug

