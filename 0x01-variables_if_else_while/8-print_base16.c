#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase
 * followed by a new line
 * using the putchar function three times
 * Return: 0
 */

int main(void)
{
int num;
int ch;
for (num = 48; num < 58; num++)
{
putchar(num);
}
for (ch = 'a'; ch <= 'f'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
