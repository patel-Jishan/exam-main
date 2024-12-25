#include<stdio.h>
int main(){
	int percentage;
	printf("Enter percentage:");
	scanf("%d",&percentage);
	if(percentage>=90){
		printf("gradeA");
		
	}
	else if(percentage>=80){
		printf("gradeB");
		
	}
	else if(percentage>=70){
		printf("gradeC");
		
	}
	else if(percentage>=60){
		printf("gradeD");
		
	}
	else if(percentage>=50){
		printf("gradeE");
		
	}
	else{
		printf("you are failed");
		
	}
}
