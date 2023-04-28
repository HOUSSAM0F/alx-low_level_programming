#include <stdio.h>

void first(void); // declare the function prototype

// use the constructor attribute to make the function run before main
__attribute__ ((constructor)) void first(void)
{
// print the sentences using puts instead of printf
puts("You're beat! and yet, you must allow,");
puts("I bore my house upon my back!");
}
