#include "Header.h"
void printfor(int n, int k)
{
	for (int i = 0; i < n; i++)
	{
		if ((i+1) % k == 0) continue;
		else printf("a[%d] =  %f\n", i, a(i));
	}
}