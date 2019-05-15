#include "Header.h"
double summ2w(double eps)
{
	double sum = 0;
	int i = 0;
	while(1)
	{
		sum += a(i);
		if (fabs(a(i)) <= eps)
		{
			return sum;
		}
		++i;
	}
}