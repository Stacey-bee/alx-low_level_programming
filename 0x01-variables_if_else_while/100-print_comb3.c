#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 * numbers are separated by ,, followed by a space
 * The two digits are different
 * Prints only the smallest combination of two digits
 * Numbers should be printed in ascending order, with two digits
 * Return: 0
 */

int main(void)
{
int num1, num2;
for (num1 = 48; num1 <= 56; num1++)
{
for (num2 = 49; num2 <= 57; num2++)
{
if (num2 > num1)
{
putchar(num1);
putchar(num2);
if (num1 != 56 || num2 != 57)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
