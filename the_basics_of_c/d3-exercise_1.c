/* d3-exercise_1.c: Calculate a multiplication and print out result */
#include <stdio.h>
/* This function multiply two intergers and returns the results */
int integer_multiply( int x, int y)
{
	int results;
	results = x * y;
	return results;
}

int main(void)
{
	int multiply;

	multiply = integer_multiply(4, 3);
	printf("The multiplication of 4 and 3 is %d.\n", multiply);
	return (0);
}


