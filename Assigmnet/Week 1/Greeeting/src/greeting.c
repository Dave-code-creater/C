#include <stdio.h>

// Function prototype
void greet(void);

#ifdef GREETING_MAIN // Define GREETING_MAIN only when this file is compiled as a standalone program
int main(void)
{
    greet();
    return 0;
}
#endif
// Function definition
void greet(void)
{
    //TODO: Finish the function
    printf("Hello, world!\n");
}