#include "main.h"
#include <stdio.h>
/**
  * main - prints first 98 fibbonacci nums
  *
  *
  * Return: 0
  */
int main(void)
{
	/* declarations */
	int i = 3;
	int large = 0;
	unsigned long a = 1, b = 2, term_1 = 0, a_2 = 0, b_2 = 0, term_2 = 0;
	unsigned long cut = 10000000000000000;
	/*printing the first nums */
	printf("%lu, %lu", a, b);
	/* looping up to 98 */
	for (; i < 99; i++)
	{
		/* prints comma space */
		printf(", ");
		/* dissecting large nums */
		term_1 = a + b;
		if (term_1 > cut)
			large = 1;
		/*printing large nums */
		if (large)
		{
			term_2 = term_1 / cut + a_2 + b_2;
			term_1 = term_1 % cut;
			printf("%lu", term_2);
			printf("%016lu", term_1);
			a_2 = b_2;
			b_2 = term_2;
		}
		/*printing regular nums */
		else
		{
			printf("%lu", term_1);
		}
		a = b;
		b = term_1;
	}
	printf("\n");
	return (0);
}

