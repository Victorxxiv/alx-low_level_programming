#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0
 */
int main(void)
{
	int a[5] = {98, 402, 198, 298, 102};

	int *p = a + 2;
	/* Your code goes here */
	/* Use pointer arithmetic to access the value at index 2 */
	/* without directly using the variable a */
	printf("a[2] = %d\n", *(p));
	return (0);
}

