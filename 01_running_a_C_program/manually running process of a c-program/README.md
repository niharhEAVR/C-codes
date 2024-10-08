// forgot about the code for now, but what we have to focus now is that c-program is a compiled language which means that when the program will compile at that time it will create a executable file (.exe) 

// now we will see the commands to run the program in windows terminal

// 1st => MinGW (c compiler) should installed in your system and the path should have set properly

// 2nd => write any c-program in the notepad 

// 3rd => and then save it as <name>.c file in any folder then right click on the folder blank space and open terminal

// 4th => gcc -E <name>.c (type this command in terminal, its a preprocessiong step)

// 5th => gcc -S <name>.c (next type this command in terminal, its a compiling step)(after this you will get to see that a .s file was created in that folder)

// 6th => gcc -c <name>.c (next type this command in terminal)(after this you will get to see that a .o file was created in that folder)

// 7th => objdump -d <name>.o (next type this command in terminal, this command will show whats actually happens after typing the previous command)(after this you will get to see that a .o file was created in that folder)

// 8th => gcc -o <name> <name>.c (next type this command in terminal, this command will create the executable file)(the first <name> is for naming the executable file, otherwise the command will not gonna work)

// 9th => now type the executable file <name> and it will give the output