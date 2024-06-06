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
	
	for(i=0; i<size; i++){
		
		if(array[i]<0){
			printf("Array[%d] Negative Element is : %d\n", i, array[i]);
		}
	}
	
}