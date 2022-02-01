options = -std=gnu++17 -Wall -Wextra -DLOCAL
compiler = g++-11

program : main.cpp
	$(compiler) $(options) -O2 $< -o $@

run : program
	./program

clean :
	rm -rf ./program ./program_debug

init :
	rm -rf test/ && oj d $(url)

test : program
	oj t -N -c ./program

submit : program
	oj t -N -c ./program && oj s main.cpp

.PHONY : run clean init test submit

