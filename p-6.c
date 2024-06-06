#include<stdio.h>
main(){
	
	int i, j, row, col;
	
	printf("Enter The Row in a Matrix :- ");
	scanf("%d", &row);
	
	printf("Enter The Column in a Matrix :- ");
	scanf("%d", &col);
	
	int array2d[row][col], arr2d[row][col], sum[row][col];
	
	printf("\nEnter Elements in 1st Matrix : \n\n	");
	for(i=0; i<row; i++){
		
		for(j=0; j<col; j++){
			
			printf("\tEnter Array[%d][%d] element is :- ", i, j);
			scanf("%d", &array2d[i][j]);
		}
	}	
	
	printf("Enter Elements in 2nd Matrix : \n\n	");
	for(i=0; i<row; i++){
		
		for(j=0; j<col; j++){
			
			printf("\tEnter Array[%d][%d] element is :- ", i, j);
			scanf("%d", &arr2d[i][j]);
		}
	}	
	
	for(i=0; i<row; i++){
		
		for(j=0; j<col; j++){
			
			sum[i][j] = array2d[i][j] + arr2d[i][j];
		}
	}
	
	printf("\n\nSum Of Both Matrix Is : \n");
	for(i=0; i<row; i++){
		
		for(j=0; j<col; j++){
			
			printf("%d  ", sum[i][j]);
		}
		printf("\n");
	}		
	
}
