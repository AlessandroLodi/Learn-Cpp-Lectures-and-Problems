

#include <math.h>
#include <iostream>

void initialise(double beta)
{
	int i;
	double prob[5]{};
	
	for (i = 2; i < 5; i += 2) prob[i] = exp(-2 * beta * i);
	int length = sizeof(prob) / sizeof(prob[0]);

	for (i = 0; i < length; ++i) std::cout << prob[i] << '\n';
}


int main()
{
	double beta{ 0.35 };
	initialise(beta);
	return 0;
}