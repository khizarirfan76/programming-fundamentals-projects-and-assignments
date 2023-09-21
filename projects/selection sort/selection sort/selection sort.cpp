#include <iostream>
using namespace std;

int main()
{
    int arr[] = { 1,2,3,5,2,6,4,2,5,3,2,5,9 };
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size - 1; i++) // n-1 because the last remaining element would automatically be the biggest/smallest one
    {
        int index = i;

        for (int j = i + 1; j < size; j++) // i+1 and n only so that each element of the array is compared with the rest
        {
            if (arr[j] > arr[index]) // this decides whether the array is ascending or descending
            {
                index = j;
            }
        }

        int temp = arr[i]; //simple af swap
        arr[i] = arr[index];
        arr[index] = temp;
    }

    for (int i = 0; i < size; i++)
    {
        cout << " " << arr[i];
    }
}
