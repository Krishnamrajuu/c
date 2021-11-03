#include<stdio.h>
void main()
{
	int minutes, hours;
	
	minutes = 550;
	hours = minutes/60;
	minutes = 550%60;
	printf("hours %d  minutes %d", hours , minutes);
}
