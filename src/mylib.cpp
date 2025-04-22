
#define _USE_MATH_DEFINES
#include <math.h>
#include "../include/mylib.hpp"

void elem_Matr(matr c)
{
	for (int i = 0; i <k; i++)
		for (int j = 0; j < k; j++)
				c[i][j] = pow(-((2 + i) / (3.0 + j)), i) - exp(cos(j));
}
void elem_Vect(matr c, vekt v) {
    for (int i = 0; i < k; ++i) {
        double maxElement = c[i][0];  
        for (int j = 1; j < k; ++j) {
            if (c[i][j] > maxElement) {
                maxElement = c[i][j];
            }
        }
        v[i] = maxElement;  
    }
}

double calculate(matr c) {
    double sum = 0;
    int count = 0;

    for (int i = 0; i < k; i += 2) { 
        for (int j = 0; j < k; j += 2) {
            sum += c[i][j];
            count++;
        }
    }

    return sum / count;
}
