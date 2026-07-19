
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
    cout<<"Alternate Array is: \n";
    for(int i=0; i<n; i+=2){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}