
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n: \n";
    cin>>n;
    int arr[n], b[n];
    cout<<"Enter the value of array: \n";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Original Array is: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n duplicate Array is: ";
    for(int i=0; i<n; i++){
      b[i]=arr[i];
        cout<<b[i]<<" ";
    }
    
    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n: \n";
    cin>>n;
    int arr[n], b[n];
    cout<<"Enter the value of array: \n";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Original Array is: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n duplicate Array is: ";
    for(int i=0; i<n; i++){
      b[i]=arr[i];
        cout<<b[i]<<" ";
    }
    
    return 0;
}