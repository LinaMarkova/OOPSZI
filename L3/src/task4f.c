#include "Header.h"
int findFirstElementf(double eps)
{
	int i = 0;
	for (;; ++i)
	{
		if (fabs(a(i)) <= eps)
		{
			break;
		}
	}
	return i;
}