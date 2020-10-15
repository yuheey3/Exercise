#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>


int main(void)
{
	//declare variable
	double x1, x2, y1, y2, result;

	//get user input
	printf("Enter the x1 => ");
	scanf("%lf", &x1);
	printf("Enter the y1 => ");
	scanf("%lf", &y1);
	printf("Enter the x2 => ");
	scanf("%lf", &x2);
	printf("Enter the y2 => ");
	scanf("%lf", &y2);

	//calculate distance using sqrt and pow functions then assign to 'result'
	result = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	
	//display result
	printf("\ndistance = %0.2lf\n",result); 

	return 0;
}