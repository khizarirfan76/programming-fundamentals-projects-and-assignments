// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void swap(int& a, int& b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int arr[] = { 1,2,3,4 };
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (arr[j + 1] > arr[j])
                swap(arr[j], arr[j + 1]);
        }
    }

    int median;

    if (size % 2 == 1)
    {
        cout << "median is " << arr[size / 2];
    }
    else
    {
        cout << "median is " << (float)(arr[size / 2] + arr[size / 2 - 1]) / 2;// dont forget the float cause average always gonna be in float 
    }

}