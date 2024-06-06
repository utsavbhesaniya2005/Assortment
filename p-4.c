#include<stdio.h>
main(){
	
	int i, size, min, max;
	
	printf("Enter the Size of array :- ");
	scanf("%d", &size);
	printf("\n");
	
	
	int array[size];
	
	for(i=0; i<size; i++){
		
		printf("Enter array[%d] element :- ", i);
		scanf("%d", &array[i]);		
	}
	
	for(i=0; i<size; i++){
		
		if(array[i] < min){
			min = array[i];
		}
		if(array[i] > max){
			max = array[i];
		}
	}
	
	printf("\nMinimum Element in Array is :- %d", min);
	
	printf("\n\nMaximum Element in Array is :- %d", max);
	
}
