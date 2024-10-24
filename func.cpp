#include "func.h"
#include <cmath>

double Func::FuncA(double x, int n) {
	double sum=0;
	for (int i=0; i<n; ++i) {
		int fact=1;
		for (int j=1; j<=2*i+1; ++j) {
			fact *=j;

		}
	sum +=pow(x,2*i+1)/fact;
	}
return sum;
}


