#include <stdio.h>
#include <stdlib.h>

struct myArray
{
    int total_size;
    int used_sized;
    int *ptr;
};

void createArray(struct myArray *a, int total, int used)
{
    a->total_size = total;
    a->used_sized = used;
    a->ptr = (int *)malloc(total * sizeof(int));
    printf("Array is created\n");
}

void setValue(struct myArray *a)
{
    printf("Setting value of array\n");
    for (int i = 0; i < a->used_sized; i++)
        scanf("%d", &a->ptr[i]);
}

void printValue(struct myArray *a)
{
    printf("value of array is\n");
    for (int i = 0; i < a->used_sized; i++)
    {
        printf("%d\n", a->ptr[i]);
    }
}

int main(int argc, char const *argv[])
{
    struct myArray marks;
    createArray(&marks, 20, 5);
    setValue(&marks);
    printValue(&marks);
    return 0;
}
