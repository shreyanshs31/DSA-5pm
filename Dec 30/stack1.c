//array implementaion stack 

#include<stdio.h>
#include<stdlib.h>
int *CreateStack(int n){
	//malloc 	
	int *Stack = (int*)malloc(n*sizeof(int));
	
	for (int i =0;i<n;i++){
		printf("Enter the element stack[%d]",i);
		scanf("%d",Stack+i);
	}
	return Stack;
}
int DisplayStack(int *Stack,int n){
	
	for (int i =n-1;i>=0;i--){
		printf("The element stack[%d]",*(Stack+i));
	}
}

int main(){
	int *acp = CreateStack(5);
	DisplayStack(acp,5);
}
