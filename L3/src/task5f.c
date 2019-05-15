#include "Header.h"
int findFirstNegativeElementf(double eps)
{
	for (int i = 0;; ++i)
	{
		if ((fabs(a(i)) <= eps) && (a(i) < 0))
		{
			return i;
		}
	}
}