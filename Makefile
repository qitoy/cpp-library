options = -std=gnu++17 -Wall -Wextra -O2 -DLOCAL
compiler = g++-11

program : main.cpp
	$(compiler) $(options) $< -o $@ -g

run : program
	./program

clean:
	rm -rf ./program ./program.dSYM

debug: program 
	lldb -f ./program

.PHONY : run clean debug

