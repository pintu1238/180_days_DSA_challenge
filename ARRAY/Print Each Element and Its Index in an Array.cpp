
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n: \n";
    cin>>n;
    int arr[n];
    cout<<"Enter the value of array: \n";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        cout<<i+1<<" :"<<arr[i]<<"\n";
    }

    return 0;
}