#include<iostream>
using namespace std;

int main(){
    int arr[]={6,7,4,2,3};
    int n=sizeof (arr)/sizeof(int);

    for (int i = 1; i <n; i++)
    {
        int curr=arr[i];
        int prev=i-1;
        while (prev>=0 && arr[prev] > curr)
        {
            swap(arr[prev],arr[prev+1]);
            prev--;
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
    
    
    
}