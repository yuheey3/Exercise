#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//declare three variable
int totalMin;
int hours;
int min;

int main(void)
{
	printf("Enter the total minutes => ");
	scanf("%d", &totalMin); //get user input
	hours = totalMin / 60; //calculate  hours
	min = totalMin % 60; //calculate minutes
	printf("%d minutes = %d hours & %d minutes\n\n", totalMin, hours, min); //display

	return 0;
}