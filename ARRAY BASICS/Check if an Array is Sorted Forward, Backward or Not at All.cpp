#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    bool ascending = true;
    bool descending = true;

    for(int i = 0; i < n - 1; i++)
    {
        if(arr[i] > arr[i + 1])
            ascending = false;

        if(arr[i] < arr[i + 1])
            descending = false;
    }

    if(ascending)
        cout << "Array is Sorted Forward";
    else if(descending)
        cout << "Array is Sorted Backward";
    else
        cout << "Array is Not Sorted";

    return 0;
}