#include "Header.h"
void printdw(int n, int k)
{
	int i = 0;
	do
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
	} while (i < n);
}