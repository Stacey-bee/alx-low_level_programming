#include <stdio.h>
/**
 * main - a program that prints all single digit numbers of
 * base 10 starting from 0, followed by a new line.
 * using the function putchar and using it only twice
 */

int main(void)
{
int num;
for (num = 48; num < 58; num++)
{
putchar(num);
}
putchar('\n');
return (0);
}
