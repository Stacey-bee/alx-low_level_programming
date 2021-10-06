#include <stdio.h>
/**
 * main - prints lowercase alphabet in reverse
 * followed by a new line
 * using the putchar function, only twice
 */

int main(void)
{
char ch = 'z';
while (ch >= 'a')
{
putchar(ch);
ch--;
}
putchar('\n');
return (0);
}
