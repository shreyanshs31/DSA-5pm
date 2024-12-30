//array implementaion stack 

#include<stdio.h>
#include<stdlib.h>
int CreateStack(int n){
	//malloc 
	
	int *Stack = (int*)malloc(n*sizeof(int));
	
	for (int i =0;i<n;i++){
		printf("Enter the element stack[%d]",i);
		scanf("%d",Stack+i);
	}
	
	
	for (int i =n-1;i>=0;i--){
		printf("Enter the element stack[%d]",*(Stack+i));
	}
	
	return 0;
}

int main(){
	CreateStack(5);
}
