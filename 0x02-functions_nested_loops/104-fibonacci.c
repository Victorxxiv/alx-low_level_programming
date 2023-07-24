#include <stdio.h>

/*Function to print the first 'n' Fibonacci numbers separated by commas*/
void print_fibonacci(int n);

int main(void)
{
	/*Print the first 98 Fibonacci numbers*/
	print_fibonacci(98);
	printf("\n");
	return (0);
}

/*Recursive function to calculate and print the Fibonacci numbers*/
void print_fibonacci(int n)
{
	static unsigned long int a = 1, b = 2;

	if (n == 0)
		return;

	printf("%lu", a);
	if (n != 1)
		printf(", ");

	b = a + b;
	a = b - a;

	print_fibonacci(n - 1);
}

