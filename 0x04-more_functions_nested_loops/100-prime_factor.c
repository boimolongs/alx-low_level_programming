#include "main.h"

/**
 * largest_prime_factor - Finds the largest prime factor of a number
 * @n: The number to find the largest prime factor for
 *
 * Return: The largest prime factor
 */
long largest_prime_factor(long n) {
    long factor = 2;
    long largest = 0;

    while (n > 1) {
        if (n % factor == 0) {
            if (factor > largest)
                largest = factor;

            while (n % factor == 0)
                n /= factor;
        } else {
            factor++;
        }
    }

    return largest;
}
int main(void) {
    long number = 612852475143;
    long largest_prime = largest_prime_factor(number);

    /* Print the largest prime factor followed by a newline */
    custom_print_num(largest_prime);
    custom_print("\n");

    return (0);
}
