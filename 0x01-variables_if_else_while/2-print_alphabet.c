#include <stdio.h>
/**
 * main - printing the alphabet in lowercase using putchar
 * Return: 0
 */
int main(void)
{
char alph;
for (alph = 'a'; alph <= 'z'; alph++)
{
putchar(alph);
putchar('\n');
}
return (0);
}
