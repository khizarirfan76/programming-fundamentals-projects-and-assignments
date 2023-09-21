#include <iostream>
using namespace std;

int main()
{
	int arr[] = { 1,3,6,6,9,3};//size6

	int size = sizeof(arr) / sizeof(arr[0]);

	int count=1;

	for (int i = 0; i < size - 1; i++) //n-1 because automatically biggest value last mein push hozayegi and usko bhala sath swap marne ke liye koi aur item wi nai
	{
		for (int j = 0; j < size - count; j++)//same thing here
		{
			if (arr[j+1] < arr[j]) // both same variable cause side by side arrays check marni
			{
				int temp;
				temp = arr[j+1];
				arr[j+1]=arr[j];
				arr[i] = temp;
			}
		}
		count++;
	}

	for (int i = 0; i < size; i++)
	{
		cout << " " << arr[i];
	}
}