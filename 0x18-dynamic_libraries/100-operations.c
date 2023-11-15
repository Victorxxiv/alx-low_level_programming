#include <stdio.h>

/* Function to add two numbers */
int add(int a, int b)
{
return (a + b);
}

/* Function to subtract two numbers */
int sub(int a, int b)
{
return (a - b);
}

/* Function to multiply two numbers */
int mul(int a, int b)
{
return (a * b);
}

/* Function to divide two numbers */
int div(int a, int b)
{
if (b != 0)
{
return (a / b);
}
else
{
fprintf(stderr, "Error: Division by zero\n");
return (0); /* You can handle the error in a way that suits your needs */
}
}

/* Function to calculate the modulus of two numbers */
int mod(int a, int b)
{
if (b != 0)
{
return (a % b);
}
else
{
fprintf(stderr, "Error: Modulus by zero\n");
return (0); /* You can handle the error in a way that suits your needs */
}
}

