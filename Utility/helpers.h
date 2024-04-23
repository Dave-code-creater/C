#ifndef HELPERS_H
#define HELPERS_H

/**
 * @brief A struct representing a string.
 * 
 * This struct is used to store a string of characters.
 * The string can have a maximum length of 200 characters.
 */
typedef struct {
    char *String[200];
} string;

/**
 * Retrieves a integer value from the user.
 *
 * This function prompts the user with the given prompt string and retrieves a integer value
 * entered by the user. The entered value is then returned as a integer.
 *
 * @param prompt The prompt string to display to the user.
 * @return The integer value entered by the user.
 */

int get_int(string prompt);

/**
 * Retrieves a double value from the user.
 *
 * This function prompts the user with the given prompt string and retrieves a double value
 * entered by the user. The entered value is then returned as a double.
 *
 * @param prompt The prompt string to display to the user.
 * @return The double value entered by the user.
 */
double get_double(string prompt);

/**
 * Retrieves a char value from the user.
 *
 * This function prompts the user with the given prompt string and retrieves a char value
 * entered by the user. The entered value is then returned as a char.
 *
 * @param prompt The prompt string to display to the user.
 * @return The char value entered by the user.
 */
char get_char(string prompt);

/**
 * Retrieves a string value from the user.
 *
 * This function prompts the user with the given prompt string and retrieves a string value
 * entered by the user. The entered value is then returned as a string.
 *
 * @param prompt The prompt string to display to the user.
 * @return The string value entered by the user.
 */
string get_string(string prompt);

#endif
