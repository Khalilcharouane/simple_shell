/**
 * FileA.c
 *
 * @brief This is a simple C program to calculate the sum of two integers.
 */

#include <stdio.h>

/**
 * @brief Calculate the sum of two integers.
 *
 * @param a The first integer.
 * @param b The second integer.
 *
 * This function takes two integers, `a` and `b`, and returns their sum.
 *
 * @return The sum of `a` and `b`.
 */
int add(int a, int b)
{
return (a + b);
}

/**
* @brief Entry point of the program.
*
* This function calculates the sum of two numbers and prints the result.
*
* @return Always returns 0.
*/
int main(void)
{
int num1 = 5;
int num2 = 7;

/* Calculate the sum of num1 and num2 */
int result = add(num1, num2);

printf("The sum of %d and %d is %d\n", num1, num2, result);

return (0);
}

