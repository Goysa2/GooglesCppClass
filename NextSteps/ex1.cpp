// ex1.cpp Samuel Goyette
// Description: A solution to exercise one of : https://developers.google.com/edu/c++/next-steps#exercises

#include <iostream>
#include <stdio.h>      /* printf */
#include <math.h>       /* sqrt */

using namespace std;

double check_if_perfect_square(double x) {
	double step1 = sqrt(x);
	double step2 = floor(step1);
	if ((step1 - step2) == 0.0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main_pf() {
	int n = 1000, sum =0;
	for (int i = 1; i <= n; ++i) {
		sum += i;
		if (check_if_perfect_square(sum))
		{
			printf("The sum for 1 to %i is %i which is a perfect square sqrt(%i) = %f\n", i, sum, sum, sqrt(sum));
		}
	}
	return 0;
}