#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 * except for letters e and q
 * using the putchar function, only twice
 * returns: 0
 */
int main(void)
{
char ch = 'a';
while (ch <= 'z')
{
if (ch != 'e' && ch != 'q')
putchar(ch);
ch++;
}
putchar('\n');
return (0);
}
