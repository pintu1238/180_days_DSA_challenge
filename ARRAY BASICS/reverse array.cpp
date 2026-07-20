
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
    cout<<"Original Array is: \n";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n Reverse Array is: \n";
    for(int i=n-1; i>=0; i--){
        cout<<arr[i]<<" ";
    }

    return 0;
}