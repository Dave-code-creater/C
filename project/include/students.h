// user.h


// Macro some of the value 
#ifndef USER_H
#define USER_H
#define TRUE 1
#define FALSE 0
#define Buffer_Length 256

// Define a strucutre of user information
typedef struct students
{
    char FirstName[50];
    char LastName[50];
    char DOBName[12]; // (Format - DD/MM/YYYY)
    char EmailName[50];
    char AddressName[50];
    unsigned int id;
    unsigned int mathGrade;
    unsigned int physicsGrade;
    unsigned int ITGrade;
    int Is_Graduate;
} students;

// Functions to deal with student
extern void Printing_Information(students *students,int Lines);
extern students Set_Default_Value(students *students);

// Function to read and write in csv file
extern int Find_Number_of_Line();
extern void Load_Data(students *Mystudent, int Lines);


#endif /* USER_H */