#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int k = 2;

    k = k % n;

    // LEFT ROTATION
    for (int r = 0; r < k; r++)
    {
        int first = arr[0];

        for (int i = 0; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }

        arr[n - 1] = first;
    }

    cout << "Left rotation: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    // Reset array
    int arr2[] = {1, 2, 3, 4, 5};

    // RIGHT ROTATION
    for (int r = 0; r < k; r++)
    {
        int last = arr2[n - 1];

        for (int i = n - 1; i > 0; i--)
        {
            arr2[i] = arr2[i - 1];
        }

        arr2[0] = last;
    }

    cout << "\nRight rotation: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr2[i] << " ";
    }

    return 0;
}