#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main block to execute
 * Description: prints all singele digits
 * Return: 0 success
 */
int main(void)
{
char c = '0';
while (c <= '9')
{
	putchar(c);
	c++;
}
putchar('\n');
return (0);
}
