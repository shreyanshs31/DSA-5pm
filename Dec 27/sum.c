#include<stdio.h>

int sum =0;

int SumElement(int arr[],int n){
	//base condition of recu
	if (n==0){
		return 0;
	}
	return arr[n-1]+ SumElement(arr,n-1);
}


int main(){
	//decl of arr
	
	int arr[] = {10,10,15,50,20,10};
	
	int size = 6;
	
 	int x  = SumElement(arr,size);
	printf("%d",x);
	return 0;
}
