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

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] + arr[j] == target)
            {
                found = true;
                break;
            }
        }

        if(found)
            break;
    }

    if(found)
        cout << "Pair Found";
    else
        cout << "Pair Not Found";

    return 0;
}








// method 2 using hashset

#include <iostream>
#include <unordered_set>
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

    unordered_set<int> s;

    bool found = false;

    for(int i = 0; i < n; i++)
    {
        int complement = target - arr[i];

        if(s.find(complement) != s.end())
        {
            found = true;
            break;
        }

        s.insert(arr[i]);
    }

    if(found)
        cout << "Pair Found";
    else
        cout << "Pair Not Found";

    return 0;
}


