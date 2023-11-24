/*
Name: Tan Dat, Ta
Date: 11/7/2023
Purpose: PRG155 - Final Project - Program must start by giving the user the following menu of operations to choose from (2D shapes calculations, Ohm’s Law
calculations, Unit Conversion, Help and an option to terminate the program).
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

// Macro definitions
#define INCH_CM 2.54
#define KM_MILES 0.6213712
#define LBS_KG 0.4535924
#define PI 3.14159

// Unit conversion function prototypes
void Convert_Inch_To_Cm();
void Convert_Km_To_Miles();
void Convert_Lbs_To_Kg();
void Main_Function_Unit_Conversion();

void Find_Area_Of_Circle();
void Find_Area_Of_Rectangle();
void Find_Area_Of_Triangle_By_Semi_Perimeter();
void Main_Function_2D_Shape();

void Voltage_Calculator();
void Resistance_Calculator();
void Current_Calculator();
void Main_Function_Ohm_Law();

void Help();
void Display();
void Display_Sub_menu_1();
void Display_Sub_menu_2();
void Display_Sub_menu_3();

// Write a function get user input
float Get_User_Input();
int Get_User_Option();

int main(void)
{
    printf("Welcome to my final project.\n");
    printf("This program will help you calculate the area of a circle, rectangle, triangle.\n");
    printf("It also helps you convert units from inches to centimeters, kilometers to miles, pounds to kilograms.\n");
    printf("It also helps you calculate voltage, resistance, current.\n");
    Display();
    int Option = Get_User_Option();
    // Fix there is bug, if its 0, it will end which is wrong
    // Send teach the flowchart to ask
    while (Option == 0)
    {
        printf("Invalid input. Please try again.\n");
        Display();
        Option = Get_User_Option();
    }
    while (Option != 0)
    {
        if (Option == 1)
        {
            Main_Function_Unit_Conversion();
            printf("\n-------------------------------------------\n");
            Display();
            printf("\n-------------------------------------------\n");
            printf("\nTo continue with program?\n(Press 1 - 5): ");

            Option = Get_User_Option();
        }
        else if (Option == 2)
        {
            Main_Function_2D_Shape();
            printf("\n-------------------------------------------\n");
            Display();
            printf("\n-------------------------------------------\n");
            printf("\nTo continue with program?\n(Press 1 - 5): ");

            Option = Get_User_Option();
        } else if (Option == 3)
        {
            Main_Function_Ohm_Law();
            printf("\n-------------------------------------------\n");
            Display();
            printf("\n-------------------------------------------\n");
            printf("\nTo continue with program?\n(Press 1 - 5): ");

            Option = Get_User_Option();
        }
        else if (Option == 4)
        {
            Help();
            printf("\n");
            Display();
            printf("\n-------------------------------------------\n");
            Option = Get_User_Option();
        }
        else if (Option == 5)
        {
            printf("Thank you for using my program\n");
            break;
        }
        else {
            printf("Invalid input. Please try again.\n");
            Display();
            Option = Get_User_Option();
        }
    }
    return 0;
}



void Display()
{
    printf("\t1. Unit conversion.\n");
    printf("\t2. 2D shape.\n");
    printf("\t3. Ohm's law.\n");
    printf("\t4. Help.\n");
    printf("\t5. Exit.\n");
}

void Main_Function_Unit_Conversion()
{
    system("clear");
    Display_Sub_menu_1();
    int option = Get_User_Option();
    do {
        switch (option)
        {
        case 0:
            option = 0;
            break;
        case 1:
            Convert_Inch_To_Cm();
            printf("\n-------------------------------------------\n");
            Display_Sub_menu_1();
            printf("\n-------------------------------------------\n");
            option = Get_User_Option();

            break;
        case 2:
            Convert_Km_To_Miles();
            printf("\n-------------------------------------------\n");
            Display_Sub_menu_1();
            printf("\n-------------------------------------------\n");
            option = Get_User_Option();
            break;
        case 3:
            Convert_Lbs_To_Kg();
            printf("\n-------------------------------------------\n");
            Display_Sub_menu_1();
            printf("\n-------------------------------------------\n");
            option = Get_User_Option();
            break;
        default:
            printf("Invalid input. Please try again.\n");
            option = Get_User_Option();
            break;
        }
    } while (option != 0);
}

void Main_Function_2D_Shape()
{
    system("clear");
    Display_Sub_menu_2();
    int option = Get_User_Option();
    do {
        switch (option)
        {
            case 0:
                option = 0;
                break;
            case 1:
                Find_Area_Of_Circle();
                printf("\n-------------------------------------------\n");
                Display_Sub_menu_2();
                printf("\n-------------------------------------------\n");

                option = Get_User_Option();
                break;
            case 2:
                Find_Area_Of_Rectangle();
                printf("\n-------------------------------------------\n");
                Display_Sub_menu_2();
                printf("\n-------------------------------------------\n");

                option = Get_User_Option();
                break;
            case 3:
                Find_Area_Of_Triangle_By_Semi_Perimeter();
                printf("\n-------------------------------------------\n");
                Display_Sub_menu_2();
                printf("\n-------------------------------------------\n");

                option = Get_User_Option();
                break;
            default:
                printf("Invalid input. Please try again.\n");
                option = Get_User_Option();
                break;
        }
    } while (option != 0);
}

void Main_Function_Ohm_Law()
{
    system("clear");
    int option = 0;
    Display_Sub_menu_3();
    option = Get_User_Option();
    do {
        switch (option)
        {
        case 1:
            Voltage_Calculator();
            printf("\n-------------------------------------------\n");
            Display_Sub_menu_3();
            printf("\n-------------------------------------------\n");
            option = Get_User_Option();
            break;
        case 2:
            Resistance_Calculator();
            printf("\n-------------------------------------------\n");
            Display_Sub_menu_3();
            printf("\n-------------------------------------------\n");
            option = Get_User_Option();
            break;
        case 3:
            Current_Calculator();
            printf("\n-------------------------------------------\n");
            Display_Sub_menu_3();
            printf("\n-------------------------------------------\n");
            option = Get_User_Option();
            break;
        default:
            printf("Invalid input. Please try again.\n");
            option = Get_User_Option();
            break;
        }
    } while (option != 0);
}

void Help()
{
    system("clear");
    printf("This is help function.\n");
    printf("It allows users to perform several calculations, such as calculating an area of 2D shapes, squares, rectangles, and triangles. Moreover, converting between the measurement system and computing the value based on Ohms Law\n");
    printf("This program will help you calculate the area of a circle, rectangle, triangle.\n");
    printf("It also helps you convert units from inches to centimeters, kilometers to miles, pounds to kilograms.\n");
    printf("It also helps you calculate voltage, resistance, current.\n");
    printf("You should choose an option from 1 to 5.\n");
    printf("\n-------------------------------------------\n");
    return ;
}

void Display_Sub_menu_1()
{
    system("clear");
    printf("This is unit conversion function.\n");
    printf("1. Convert inches to centimeters.\n");
    printf("2. Convert kilometers to miles.\n");
    printf("3. Convert pounds to kilograms.\n");
    printf("Enter 0 for exits.\n");
    printf("Please choose an option (1, 2, 3 or 0): \n");
    return ;
}
void Display_Sub_menu_2()
{
    system("clear");
    printf("This is 2D shape function.\n");
    printf("1. Find the area of a circle.\n");
    printf("2. Find the area of a rectangle.\n");
    printf("3. Find the area of a triangle.\n");
    printf("Enter 0 for exits.\n");
    printf("Please choose an option (1, 2, 3 or 0): \n");
    return ;
}
void Display_Sub_menu_3()
{
    system("clear");
    printf("This is Ohm's law function.\n");
    printf("1. Calculate voltage.\n");
    printf("2. Calculate resistance.\n");
    printf("3. Calculate current.\n");
    printf("Please choose an option (1, 2, 3): ");
    printf("Enter 0 for exits.\n");
    return ;
}

void Convert_Inch_To_Cm()
{
    int continue_loop = 0;
    do {
        printf("\nConverting from inch to cm\n");
        printf("\n-------------------------------------------\n");
        float input = Get_User_Input();
        float result = input * INCH_CM;
        printf("%.2f inches is %.2f centimeters.\n", input, result);
        printf("\n-------------------------------------------\n");
        printf("Do you want to end the calculation\n(1 for yes, 0 for no)\n");
        continue_loop = Get_User_Option();
    } while (continue_loop == 1);
    return ;
}
void Convert_Km_To_Miles()
{
    int continue_loop = 0;
    do {
        printf("\nConverting from kilometers to miles\n");
        printf("\n-------------------------------------------\n");
        float input = Get_User_Input();
        float result = input * KM_MILES;
        printf("%.2f kilometers is %.2f miles.\n", input, result);
        printf("\n-------------------------------------------\n");
        printf("Do you want to end the calculation\n(1 for yes, 0 for no)\n");
        continue_loop = Get_User_Option();
    } while (continue_loop == 1);
    return ;
}

void Convert_Lbs_To_Kg()
{
    int continue_loop = 0;
    do {

        printf("\nConverting from pounds to kilograms\n");
        printf("\n-------------------------------------------\n");
        float input = Get_User_Input();
        float result = input * LBS_KG;
        printf("%.2f pounds is %.2f kilograms.\n", input, result);
        printf("\n-------------------------------------------\n");
        printf("Do you want to end the calculation\n(1 for yes, 0 for no)\n");
        continue_loop = Get_User_Option();
    } while (continue_loop == 1);
    return ;
}

void Find_Area_Of_Circle()
{
    int continue_loop = 0;
    do {
        printf("\nFind the area of the circle\n");
        printf("\n-------------------------------------------\n");
        printf("Enter the radius of the circle\n");
        float radius = Get_User_Input();
        float result = PI * radius * radius;
        printf("The area of the circle is %.2f.\n", result);
        printf("\n-------------------------------------------\n");
        printf("Do you want to end the calculation\n(1 for yes, 0 for no)\n");
        continue_loop = Get_User_Option();
    } while (continue_loop == 1);
    return ;
}

void Find_Area_Of_Rectangle()
{
    int continue_loop = 0;
    do {
        printf("\nFind the area of rectangle\n");
        printf("\n-------------------------------------------\n");
        printf("Enter the lenght of rectangle\n");
        float length = Get_User_Input();
        printf("Enter the width of rectangle\n");
        float width = Get_User_Input();
        float result = length * width;
        printf("The area of the rectangle is %.2f.\n", result);
        printf("\n-------------------------------------------\n");
        printf("Do you want to end the calculation\n(1 for yes, 0 for no)\n");
        continue_loop = Get_User_Option();
    } while (continue_loop == 1);
    return ;
}

void Find_Area_Of_Triangle_By_Semi_Perimeter()
{
    int continue_loop = 0;
    do {
        printf("\nFind the area of triangle\n");
        printf("\n-------------------------------------------\n");
        printf("Enter the value for each side\n");
        printf("The first side - ");
        float side1 = Get_User_Input();
        printf("\nThe second side - ");
        float side2 = Get_User_Input();
        printf("\nThe third side - ");
        float side3 = Get_User_Input();

        // Check if the sides form a valid triangle
        if (side1 + side2 > side3 && side2 + side3 > side1 && side3 + side1 > side2) {
            float semiPerimeter = (side1 + side2 + side3) / 2;
            float result = sqrt(semiPerimeter * (semiPerimeter - side1) * (semiPerimeter - side2) * (semiPerimeter - side3));
            printf("The area of the triangle is %.2f.\n", result);
        } else {
            printf("Invalid sides. Cannot form a triangle.\n");
        }

        printf("\n-------------------------------------------\n");
        printf("Do you want to end the calculation (1 for yes, 0 for no)\n");
        continue_loop = Get_User_Option();
    } while (continue_loop == 1);
}

void Voltage_Calculator()
{
    int continue_loop = 0;
    do {
        printf("\nFind the voltage\n");
        printf("\n-------------------------------------------\n");
        printf("The value for current\n");
        float current = Get_User_Input();
        printf("The value for resistance\n");
        float resistance = Get_User_Input();
        float result = current * resistance;
        printf("The voltage is %.2f.\n", result);
        printf("\n-------------------------------------------\n");
        printf("Do you want to end the calculation\n(1 for yes, 0 for no)\n");
        continue_loop = Get_User_Option();
    } while (continue_loop == 1);
    return ;
}

void Resistance_Calculator()
{
    int continue_loop = 0;
    do {
        printf("\nFind the resistance\n");
        printf("\n-------------------------------------------\n");
        printf("The value for voltage\n");
        float voltage = Get_User_Input();
        printf("The value for current\n");
        float current = Get_User_Input();
        float result = voltage / current;
        printf("The resistance is %.2f.\n", result);
        printf("\n-------------------------------------------\n");
        printf("Do you want to end the calculation\n(1 for yes, 0 for no)\n");
        continue_loop = Get_User_Option();
    } while (continue_loop == 1);
    return ;
}

void Current_Calculator()
{
    int continue_loop = 0;
    do {
        printf("\nFind the current\n");
        printf("\n-------------------------------------------\n");
        printf("The value for voltage\n");
        float voltage = Get_User_Input();
        printf("The value for resistance\n");
        float resistance = Get_User_Input();
        float result = voltage / resistance;
        printf("The current is %.2f.\n", result);
        printf("\n-------------------------------------------\n");
        printf("Do you want to end the calculation\n(1 for yes, 0 for no)\n");
        continue_loop = Get_User_Option();
    } while (continue_loop == 1);
    return ;
}

float Get_User_Input()
{
    float input;
    int result;

    do {
        printf("Enter a number: ");
        // Scan will take anything from b
        result = scanf("%f", &input);

        // Clear the input buffer if user input was not a number
        if(result != 1) {
            int ch;
            while((ch = getchar()) != '\n' && ch != EOF);
        }
    } while(result != 1 || input < 0);

    return input;
}

int Get_User_Option()
{
    int input = 0;
    int result = 0;

    do {
        printf("Enter a number: ");
        result = scanf("%d", &input);
        int ch = getchar();
        while(ch != '\n' && ch != EOF)
        {
            ch = getchar();
        }
    } while(result != 1 || input < -1 || input > 6);

    return input;
}