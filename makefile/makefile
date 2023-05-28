#https://makefiletutorial.com/#getting-started

# variables
CC = gcc # compiler command
CARGS = -Wall -std=c11 # compiler flags

#target: dependancy/prerequisites
#	command

blah: blah.o  # executable file created from .o file
	$(CC) $(CARGS) blah.o -o blah # Runs third
	ls

blah.o: blah.c  # object file created from .c file
	$(CC) $(CARGS) -c blah.c -o blah.o # Runs second 
	ls

# Typically blah.c would already exist, but I want to limit any additional required files
blah.c:
	echo "int main() { return 0; }" > blah.c # Runs first
	ls

clean:
	rm -f blah blah.o blah.c
	ls