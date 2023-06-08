#include <iostream>
#include <stdlib.h>
using namespace std;

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
    cout << "Array has been created" << endl;
}

void setValue(struct myArray *a)
{
    cout << "Setting value of array\n";
    for (int i = 0; i < a->used_sized; i++)
        scanf("%d", &a->ptr[i]);
}

void printValue(struct myArray *a)
{
    cout << "value of array is\n";
    for (int i = 0; i < a->used_sized; i++)
    {
        printf("%d\n", a->ptr[i]);
    }
}

int getValue(struct myArray *a, int i)
{
    return a->ptr[i];
}

void setValue(struct myArray *a, int i, int value)
{
    a->ptr[i] = value;
}

int main(int argc, char const *argv[])
{
    struct myArray marks;
    createArray(&marks, 20, 5);
    setValue(&marks);
    printValue(&marks);
    cout << getValue(&marks, 3);
    setValue(&marks, 2, 45);
    cout << getValue(&marks, 2);
    return 0;
}
