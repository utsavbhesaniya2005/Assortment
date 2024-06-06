#include<stdio.h>
main(){
	
	int i, j, row, col, max;
	
	printf("Enter The Row You Want :- ");
	scanf("%d", &row);
	
	printf("Enter The Column You Want :- ");
	scanf("%d", &col);
	
	printf("\n");
	
	int array2d[row][col];
	
	
	for(i=0; i<row; i++){
		
		for(j=0; j<col; j++){
			
			printf("Enter Array[%d][%d] element is :- ", i, j);
			scanf("%d", &array2d[i][j]);
		}
	}	
	
	for(i=0; i<row; i++){
		
		for(j=0; j<col; j++){
			
			if(max<array2d[i][j]){
				
				max = array2d[i][j];
			}
		}
	}		
	
	printf("\n\nLargest Number in Array Is :- %d\n", max);
}
