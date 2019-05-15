#include "Header.h"
double summ2f(double eps)
{
	double sum = 0;
	for (int i = 0;; ++i)
	{
		sum += a(i);
		if (fabs(a(i)) <= eps)
		{
			return sum;
		}
	}
}


