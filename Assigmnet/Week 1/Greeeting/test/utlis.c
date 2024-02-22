#include <stdio.h>
#include "/workspaces/C/Assigmnet/Week 1/Greeeting/src/greeting.c"
#include <assert.h>
#include <string.h>

char *test_greeting(void)
{
    // Redirect stdout to a buffer
    char buffer[1024] = {0};
    FILE *temp = tmpfile();
    FILE *old = stdout;
    stdout = temp;

    // Call the function
    greet();

    // Check the output
    rewind(temp);
    fgets(buffer, sizeof(buffer), temp);
    assert(strcmp(buffer, "Hello, world!\n") == 0);

    // Reset stdout
    stdout = old;
    return "All tests passed";
}

int main(void)
{
    char *result = test_greeting();
    printf("%s\n", result);
    return 0;
}