#include <stdio.h>
#include <stdlib.h>
int *createarray(int size)
{

    // basic syntax of malloc
    // data type * variable _name = (datetype*) malloc(size*sizeof(datatype))
    int *arr = (int *)malloc(size * sizeof(int));

    if (arr == NULL)
    {
        printf("memory allocation failed !\n");
        return NULL;
    }

    for (int i = 0; i < size; i++)
    {
        arr[i] = i + 1;
    }
    return arr;
}

int main()
{
    int size = 5;

    int *array = createarray(size);

    if (array != NULL)
    {
        for (int i = 0; i < size; i++)
        {
            printf("%d\n", array[i]);
        }

        free(array);
    }

    return 0;
}