#include <iostream>
using namespace std;

int main()
{
    int arr1[] = { 4,2,5,7,3,2,6,9 };
    int arr2[] = { 6,7,4,0,2,5,1 };

    int n1 = sizeof(arr1) / sizeof(arr1[0]);

    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    int u[n1 + n2];

    int k = 0;

    for (int i = 0; i < n1; i++)
    {
        u[k] = arr1[i];
        k++;
    }

    for (int i = 0; i < n2; i++)
    {
        bool flag = true;

        for (int j = 0; j < k; j++)
        {
            if (u[j] == arr2[i])
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            u[k] = arr2[i];
            k++;
        }
    }

    for (int i = 0; i < k; i++)
    {
        cout << u[i] << endl;
    }
}