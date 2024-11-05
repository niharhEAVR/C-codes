## Forgot about the code for now, but what we have to focus now is that c-program is a compiled language which means that when the program will compile at that time it will create a executable file (.exe) 

### Now we will see the commands to run the program in windows terminal

**1.** MinGW (c compiler) should installed in your system and the path should have set properly

**2.** write any c-program in the notepad 

**3.** and then save it as <file_name>.c file in any folder then right click on the folder blank space and open terminal

**4.** type this command in terminal, its a preprocessiong step
```
gcc -E <file_name>.c
```

**5.** next type this command in terminal, its a compiling step(after this you will get to see that a .s file was created in that folder)
```
gcc -S <file_name>.c
```

**6.** next type this command in terminal(after this you will get to see that a .o file was created in that folder)
```
gcc -c <file_name>.c
```

**7.** next type this command in terminal, this command will show whats actually happens after typing the previous command(after this you will get to see that a .o file was created in that folder)
```
objdump -d <file_name>.o
```

**8.** next type this command in terminal, this command will create the executable file(the first <file_name> is for naming the executable file, otherwise the command will not gonna work)
```
gcc -o <file_name> <file_name>.c
```

**9.** now type the executable file <file_name> and it will give the output
```
<file_name>
```