#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits
 * Numbers must by separated by a comma followed by a space
 * the three digits are different
 * numbers are printed in ascending order
 * Return: 0
 */

int main(void)
{
int num1, num2, num3;
for (num1 = 48; num1 <= 55; num1++)
{
for (num2 = 47; num2 <= 56; num2++)
{
for (num3 = 46; num3 <= 57; num3++)
{
if (num3 > num2 && num2 > num1)
{
putchar(num1);
putchar(num2);
putchar(num3);
if (num3 != 57 || num2 != 56 || num3 != 55)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
