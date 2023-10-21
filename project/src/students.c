#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "students.h"

// Declare global variable
FILE *CSVptr = NULL;

int Find_Number_of_Line()
{
    CSVptr = fopen("/home/host/C/project/data/user_data.csv","r");


    if (CSVptr == NULL)
    {
        fprintf(stderr, "Could not open the file\n");
    }
    
    int current_line = 1;
    char c;
    do 
    {
        c = fgetc(CSVptr);
        if (c == 10) current_line++;

    } while (c != EOF);

    fclose(CSVptr);

    return current_line;
}

// Get information from files 
void Load_Data(students *Mystudent, int Lines)
{
    char row[Buffer_Length];
    CSVptr = fopen("/home/host/C/project/data/user_data.csv","r");

    if (CSVptr == NULL)
    {
        fprintf(stderr, "Could not open the file\n");
    }

    int current_line = 0;
    while (fgets(row, sizeof(row), CSVptr) != NULL)
    {
        if (current_line >= Lines)
        {
            fprintf(stderr, "Reached the maximum number of lines\n");
            break; // Exit the loop if you've read the maximum number of lines
        }

        // Parse the contents of 'row' and store them in the Mystudent array
        sscanf(row, "%s %s %s %s %s %d %d %d %d %d",
               Mystudent[current_line].FirstName,
               Mystudent[current_line].LastName,
               Mystudent[current_line].DOBName,
               Mystudent[current_line].EmailName,
               Mystudent[current_line].AddressName,
               &Mystudent[current_line].id,
               &Mystudent[current_line].mathGrade,
               &Mystudent[current_line].physicsGrade,
               &Mystudent[current_line].Is_Graduate,
               &Mystudent[current_line].Is_Graduate);

        current_line++; // Move to the next line
    }
}

void Printing_Information(students *students,int Lines)
{
    for (int i = 0 ; i < Lines; i++)
    {
        printf("The information for line %d: \n",i);
        printf("User first name: %s",students->FirstName);
        printf("User first name: %s",students->LastName);
        printf("User first name: %s",students->DOBName);
        printf("User first name: %s",students->EmailName);
        printf("User first name: %s",students->AddressName);
        printf("User first name: %d",students->id);
        printf("User first name: %d",students->mathGrade);
        printf("User first name: %d",students->physicsGrade);
        printf("User first name: %d",students->ITGrade);
        printf("User first name: %d",students->ITGrade);
    }
}
students Set_Default_Value(students *students);

