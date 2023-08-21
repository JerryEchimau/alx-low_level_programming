#include <stdio.h>
/**
 * main - prints 1 to 100
 * Description: multiples of 3 is Fizz, multiples of 5 is Buzz
 * multiples of both is Fizzbuzz
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
			printf("%i ", i);
	}
	printf("\n");
	return 0;
}
