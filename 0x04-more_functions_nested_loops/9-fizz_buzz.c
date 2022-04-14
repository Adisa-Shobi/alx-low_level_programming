#include <stdio.h>
void fizz_buzz(void);
/**
 *main - Entry point
 *
 *
 *Return: success(0)
 */
int main(void)
{
	fizz_buzz();
	return (0);
}

/**
 *fizz_buzz - prints 1 -100 substituting multiples of 3 with Fizz,
 *and multiples of 5 with Buzz, and both with FizzBuzz
 *Return: void
 */
void fizz_buzz(void)
{
	int i;

	char _fizz[] = "Fizz";

	char fizz_buzz[] = "FizzBuzz";

	char _buzz[] = "Buzz";

	for (i = 1 ; i <= 100 ; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("%s", fizz_buzz);
		}
		else if ((i % 3) == 0)
		{
			printf("%s", _fizz);
		}
		else if ((i % 5) == 0)
		{
			printf("%s", _buzz);
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
		{
			putchar(' ');
		}
	}
	putchar('\n');
}
