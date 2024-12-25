#include<stdio.h>
int main(){
	float celsisus;
	printf("Enter temperature in celsisus:");
	scanf("%f",&celsisus);
	float fahrenheit;
	fahrenheit=9.0/5*celsisus+32;
	printf("temperature in fahreheit is %f",fahrenheit);
}
