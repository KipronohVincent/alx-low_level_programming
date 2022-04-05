## C - Hello, World

#### [0. Preprocessor](0-preprocessor)

Write a script that runs a C file through the preprocessor and save the result into another file.

- The C file name will be saved in the variable $CFILE
- The output should be saved in the file c

#### [1. Compiler](1-compiler)

Write a script that compiles a C file but does not link.

- The C file name will be saved in the variable $CFILE.
- The output file should be named the same as the C file, but with the extension .o instead of .c.

#### [2. Assembler](2-assembler)

Write a script that generates the assembly code of a C code and save it in an output file.

- The C file name will be saved in the variable $CFILE
- The output file should be named the same as the C file, but with the extension .s instead of .c

#### [3. Name](3-name)

Write a script that compiles a C file and creates an executable named cisfun.

- The C file name will be saved in the variable $CFILE

#### [4. Hello, puts](4-puts.c)

Write a C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line.

- Use the function puts
- You are not allowed to use printf
- Your program should end with the value 0

#### [5. Hello, printf](5-printf.c)

Write a C program that prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line.

- Use the function printf
- You are not allowed to use the function puts
- Your program should return 0
- Your program should compile without warning when using the -Wall gcc option

#### [6. Size is not grandeur, and territory does not make a nation](6-size.c)

Write a C program that prints the size of various types on the computer it is compiled and run on.

- You should produce the exact same output as in the example
- Warnings are allowed
- Your program should return 0
- You might have to install the package libc6-dev-i386 on your Linux (Vagrant) to test the -m32 gcc option

#### [7. Intel](100-intel)

Write a script that generates the assembly code (Intel syntax) of a C code and save it in an output file.

- The C file name will be saved in the variable $CFILE.
- The output file should be named the same as the C file, but with the extension .s instead of .c

#### [8. UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity](101-quote.c)

Write a C program that prints exactly and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error.

- You are not allowed to use any functions listed in the NAME section of the man (3) printf or man (3) puts
- Your program should return 1
- Your program should compile without any warnings when using the -Wall gcc option 
