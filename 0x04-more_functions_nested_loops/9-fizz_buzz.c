#include "main.h"

/**
 * _putchar - Custom function to print a character
 * @c: The character to be printed
 *
 * Return: Number of characters printed
 */

/**
 * custom_print - Prints a string
 * @str: The string to print
 */
void custom_print(const char * str) {
    while ( * str) {
        _putchar( * str);
        str++;
    }
}

/**
 * custom_print_num - Prints a number
 * @num: The number to print
 */
void custom_print_num(int num) {
    if (num == 0) {
        _putchar('0');
        return;
    }

    if (num / 10 != 0) {
        custom_print_num(num / 10);
    }

    _putchar('0' + num % 10);
}

int main(void) {
    int i;

    for (i = 1; i <= 100; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            custom_print("FizzBuzz");
        } else if (i % 3 == 0) {
            custom_print("Fizz");
        } else if (i % 5 == 0) {
            custom_print("Buzz");
        } else {
            custom_print_num(i);
        }

        if (i < 100) {
            custom_print(" ");
        } else {
            custom_print("\n");
        }
    }

    return (0);
}
