#include "Header.h"
void printw(int n, int k)
{
	int i = 0;
	while( i < n)
	{
		if ((i + 1) % k == 0)
		{
			++i;
			continue;
		}
		else {
			printf("a[%d] =  %f\n", i, a(i));
			++i;
		}
	}
}