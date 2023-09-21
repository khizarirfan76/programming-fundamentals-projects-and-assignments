#include <iostream>
using namespace std;

void swap(int& a, int& b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void mode(int A[], int size)
{
    int mode;
    int number;
    number = A[0];
    int countmode = 1;// 1st element is already counted

    for (int i = 1; i < size; i++)
    {
        int count = 1;
        if (number == A[i])//and we used i because rn this is the 1(2nd) element and we are comparing it too A[0] as we have already declared it as an expected mode this will count the first consecutive elements
            count++;
        else
        {
            number = A[i];//as soon as next number is acquired we change the testing number
        }
        if (count > countmode)//as previous countmodes have been established before so if another candidate repeats but is less than previous number it will be ignored
        {
            countmode = count;//makes the count official
            mode = number;//declares the number to tempoa=ray to be the mode
        }

    }
    cout << "mode is " << mode << endl << endl;

}

void display(int A[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << " " << A[i];
    }
}

int main()
{
    //array declaration
    cout << "enter array size:";
    int size;
    cin >> size;
    int arr[size];
    //array entry
    for (int i = 0; i < size; i++)
    {
        cout << "enter num:" << endl;
        cin >> arr[i];
    }
    //sorting
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[i])
                swap(arr[j], arr[i]);
        }
    }
    //mode
    mode(arr, size);
    //display
    display(arr, size);
}