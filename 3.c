#include<stdio.h>
int main(){
	int rows,column,i,j;
	printf("Enter no of rows:");
	scanf("%d",&rows);
	printf("Enter no of column:");
	scanf("%d",&column);
	int x[rows][column],y[rows][column],z[rows][column];
	printf("Enter array of x:\n");
	for(i=0;i<rows;i++){
		for(j=0;j<column;j++){
			printf("array elements x[%d][%d]",i,j);
			
		}
		printf("\n");
	}
	printf("Enter array of y:\n");
	for(i=0;i<rows;i++){
		for(j=0;j<column;j++){
			printf("array elements y[%d][%d]",i,j);
			
		}
		
	
}
	for(i=0;i<rows;i++){
		for(j=0;j<column;j++){
			z[i][j]=x[i][j]+y[i][j];
		}
	}
	printf("sum is :\n");
	for(i=0;i<rows;i++){
		for(j=0;j<column;j++){
			printf("%d",z[i][j]);
		}
		printf("\n");
	}
}




	

