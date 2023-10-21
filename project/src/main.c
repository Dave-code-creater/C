#include <stdio.h>

#include "students.h"

int main(void)
{
    students *Mystudent = NULL;
    int line = 0;

    system("clear");
    printf("Hello world !\n");

    line = Find_Number_of_Line();
    printf("The number of line:%d",line);

    Load_Data(Mystudent, line);

    Printing_Information(Mystudent, line);
    return 0;
}
