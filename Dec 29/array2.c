#include<stdio.h>

int main(){
    int  arr[5];

    int *ptr = arr;
    
    
    printf("address of pointer ptr  : %p\n",ptr);

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the element in a array using pointer : ");
        scanf("%d",ptr+i);
        printf("address of pointer ptr  : %p\n",ptr+i);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("\nThe element in a array using pointer : %d",*(ptr+i));
    }

}