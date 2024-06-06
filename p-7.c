#include<stdio.h>
main(){
	
	int i, j, row, col, max;
	int sum=0, add=0; 
	
	printf("Give Same Row And Column in a Matrix  \n\n");
	printf("Enter The Row of Matrix :- ");
	scanf("%d", &row);
	
	printf("Enter The Column of Matrix :- ");
	scanf("%d", &col);
	
	int array2d[row][col];
	
	if(row==col){
		
		printf("\nEnter Elements in a Matrix : \n\n	");
		for(i=0; i<row; i++){
			
			for(j=0; j<col; j++){
				
				printf("\tEnter Array[%d][%d] element is :- ", i, j);
				scanf("%d", &array2d[i][j]);
			}
		}	
	
		printf("\n\nYour Matrix Is :- \n");
		for(i=0; i<row; i++){
			
			for(j=0; j<col; j++){
				
				printf("%d  ", array2d[i][j]);	
			}
			
			printf("\n");
		}
	
		for(i=0; i<row; i++){
			
			sum = sum + array2d[i][i]; 
			add = add + array2d[i][row - i - 1];
		}
		
		printf("\n\n Sum of the main Diagonal in a Matrix Is :- %d", sum);
		
		printf("\n Sum of the Sub Diagonal in a Matrix Is :- %d", add);
	
	}else{
		
		printf("The Row And Column YOu have Enter Is not Same");
	}
	
}
