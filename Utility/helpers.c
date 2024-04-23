#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "helpers.h"

int get_int(string prompt) {
    int value;
    printf("%s", prompt.String);
    scanf("%d", &value);
    return value;
}

double get_double(string prompt) {
    double value;
    printf("%s", prompt.String);
    scanf("%lf", &value);
    return value;
}

char get_char(string prompt) {
    char value;
    printf("%s", prompt.String);
    scanf(" %c", &value);
    return value;
}

string get_string(string prompt) {
    string value;
    printf("%s", prompt.String);
    scanf(" %s", value.String);
    return value;
}