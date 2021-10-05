#include <stdio.h>
/**
 * main - printing the alphabet in lower and then upper case
 * Return: 0
 */
int main(void)
{
char alp_low;
char alp_upp;
for (alp_low = 'a'; alp_low <= 'z'; alp_low++)
{
putchar(alp_low);
}
for (alp_upp = 'A'; alp_upp <= 'Z'; alp_upp++)
{
putchar(alp_upp);
}
putchar('\n');
return (0);
}
