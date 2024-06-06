#include<stdio.h>
main(){
	
	int i, size, sum=0;
	
	printf("Enter the Size of array :- ");
	scanf("%d", &size);
	printf("\n");
	
	
	int array[size];
	
	for(i=0; i<size; i++){
		
		printf("Enter array[%d] element :- ", i);
		scanf("%d", &array[i]);		
	}
	
	for(i=0; i<size; i++){
		
		sum = sum + array[i];	
	}
	
	printf("\nSum of All Element is : %d\n", sum);
	
}
