#include <stdio.h>

// Function prototype
int Get_Float_Input(void);
void Compare_BMI(float BMI);

int main(void)
{
    // This program requests an integer from the user
    // and performe BMI calculation
    float weight, height, bmi;
    int status;
    weight = Get_Float_Input();
    height = Get_Float_Input();
    bmi = weight / (height * height);
    printf("BMI: %.2f\n", bmi);

    // Compare BMI
    Compare_BMI(bmi);
}

// Function definition
int get_float_input(void)
{
    // TODO: Finish the function
    ;
}

void Compare_BMI(float BMI)
{
    int BMI_Male = {}
}
