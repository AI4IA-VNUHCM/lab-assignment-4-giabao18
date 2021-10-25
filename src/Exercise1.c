/*
1.	Write a program to construct the Pascal triangle with the given integer n.
Ex:
______________________________________
| Input: 3                           |
| Output:                            |
| 1                                  |
| 1 1                                |
| 1 2 1                              |
| 1 3 3 1                            |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int binomialCoeff(int n, int k)
{ // c(line,i)=line!/((line-i)!*i!)
	int value = 1;
	if (k > n - k)
		k = n - k;
	for (int i = 0; i < k; ++i)
	{
		value *= (n - i);
		value /= (i + 1);
	}
	return value;
}
void Ex1(int n)
{
	// Your codes here
	for (int line = 0; line < n + 1; line++)
	{
		for (int i = 0; i <= line; i++)
		{
			printf("%d ", binomialCoeff(line, i));
		}
		printf("\n");
	}
}

int main(int argc, char *argv[])
{
	// testing variable, applying it to your algorithm for auto-evaluating
	int testcase = atoi(argv[1]);

	Ex1(testcase);
	return 0;
}
