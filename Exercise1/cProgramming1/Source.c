#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//declare three variable
float km;
float kg;
float degC;

int main(void)
{
	//declare variable
	float miles;
	float lbs;
	float degF;

	printf("Enter distance in km => ");
	scanf("%f", &km); //get user input
	miles = km * 0.621371; //calculate  miles

	printf("%0.2f km = %0.2f mile\n\n", km, miles); //display

	printf("Enter weight in kg => ");
	scanf("%f", &kg);
	lbs = kg * 2.20462;
	printf("%0.2f kg = %0.2f lbs\n\n", kg, lbs);

	printf("Enter temperture in deg C => ");
	scanf("%f", &degC);
	degF = (degC *1.8) + 32;
	printf("%0.2f deg C = %0.2f deg F", degC, degF);

	return 0;
}