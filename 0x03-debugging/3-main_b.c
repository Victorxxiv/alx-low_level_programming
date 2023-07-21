#include <stdio.h>
#include "main.h"

/**
 * main - Test case for print_remaining_days function
 * This program tests the print_remaining_days function
 * with a leap year date: 02/29/2000
 * Return: 0
 */

int main(void)
{
	int month;
	int day;
	int year;

	month = 2;
	day = 29;
	year = 2000;

	printf("Date: %02d/%02d/%04d\n", month, day, year);

	day = convert_day(month, day);

	print_remaining_days(month, day, year);

	return (0);
}
