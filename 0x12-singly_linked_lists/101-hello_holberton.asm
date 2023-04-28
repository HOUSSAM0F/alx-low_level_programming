global   main
extern   printf
main:
push  format ; push the address of the format string to the stack
call  printf ; call the printf function
add   esp, 4 ; adjust the stack pointer
xor   eax, eax ; set eax to zero
ret   ; return from the main function
format: db `Hello, Holberton\n`,0 ; define the format string
