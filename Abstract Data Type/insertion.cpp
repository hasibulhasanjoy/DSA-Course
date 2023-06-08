#include <iostream>
using namespace std;

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insert(int arr[], int size, int index, int element)
{
    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
}

int main(int argc, char const *argv[])
{
    int arr[100] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = 8;
    display(arr, size);
    insert(arr, size, 3, 45);
    size++;
    display(arr, size);
    return 0;
}
