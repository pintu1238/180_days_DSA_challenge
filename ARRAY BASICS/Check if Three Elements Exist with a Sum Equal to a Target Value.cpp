#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int target;
    cin >> target;

    bool found = false;

    for(int i = 0; i < n - 2; i++)
    {
        for(int j = i + 1; j < n - 1; j++)
        {
            for(int k = j + 1; k < n; k++)
            {
                if(arr[i] + arr[j] + arr[k] == target)
                {
                    found = true;
                    break;
                }
            }
            if(found)
                break;
        }
        if(found)
            break;
    }

    if(found)
        cout << "Triplet Found";
    else
        cout << "Triplet Not Found";

    return 0;
}