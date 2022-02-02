options = -std=gnu++17 -Wall -Wextra -DLOCAL
compiler = g++-11

program : main.cpp
	$(compiler) $(options) -O2 $< -o $@

run : program
	./program

clean :
	rm -rf ./program ./program_debug

.PHONY : run clean

