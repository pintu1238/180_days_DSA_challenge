#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[100];

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int pos, value;
    cin >> pos >> value;

    // Right Shift
    for(int i = n; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[pos] = value;
    n++;

    cout << "Array after insertion:\n";

    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}