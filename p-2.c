#include<stdio.h>
main(){
	
	int i, size;
	
	printf("Enter the Size of array :- ");
	scanf("%d", &size);
	printf("\n");
	
	int array[size];
	
	
	for(i=0; i<size; i++){
		
		printf("Enter array[%d] element :- ", i);
		scanf("%d", &array[i]);		
	}
	printf("\n");
	
	for(i=size-1; i>=0; i--){
		
		printf("Reverse Order of an Array is : %d\n", array[i]);
	}
	
}
