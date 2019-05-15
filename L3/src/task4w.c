#include "Header.h"
int findFirstElementw(double eps)
{
	int i = 0;
	while (1)
	{
		if (fabs(a(i)) <= eps)
		{
			break;
		}
		++i;
	}
	return i;
}