#include <stdlib.h>                                                                                                                   
#include <time.h>                                                                                                                       
#include <stdio.h>                                                                                                                      
/**                                                                                                                                     
 * main - lock to be executes                                                                                                           
 * Return: 0-success                                                                                                                    
 */                                                                                                                                     
void positive_or_negative(int i)
{
	int n;                                                                                                                                  
	srand(time(0));                                                                                                                         
	n = i;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	if (n == 0)
	{		
		printf("%d is zero\n", n);
	}		
	else if (n < 0)
	{	
		printf("%d is negative\n", n);
	}
	return (0);
} 



#include "main.h"

/**
 * main - test for positive or negative
 * Return: 0
 */

int main(void)
{
int i;

i = 0;
positive or negative(i);

}
