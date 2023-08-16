#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/* Function to add two numbers */
int op_add(int a, int b)
{
	return (a + b);
}

/* Function to subtract two numbers */
int op_sub(int a, int b)
{
	return (a - b);
}

/* Function to multiply two numbers */
int op_mul(int a, int b)
{
	return (a * b);
}

/* Function to divide two numbers */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/* Function to get the remainder of division */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

