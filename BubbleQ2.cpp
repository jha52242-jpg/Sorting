#include<iostream>
using namespace std;
/* int main(){
    int arr[]={3, 6, 2, 1, 8, 7, 4, 5, 3, 1};
    int n=sizeof (arr)/sizeof (int);

    for (int i = 0; i <n; i++)
    {
    for (int  j = 0; j <n-i-1; j++)
    {
        if (arr[j]>arr[j+1])
        {
            swap(arr[j],arr[j+1]);
        }   
    }
         }
    for (int i = n-1; i>=0; i--)
    {
        cout<<arr[i]<<" ";
    }
    
}*/

//-----------------inseration sort---------------------//
int main(){
int arr[]={3, 6, 2, 1, 8, 7, 4, 5, 3, 1};
    int n=sizeof (arr)/sizeof (int);

    for (int i = 1; i <n; i++)
    {
        int curr=arr[i];
        int prev=i-1;
        while (prev>=0 && arr[prev]>curr)
        {
            swap(arr[prev],arr[prev+1]);
            prev--;
        }
        
    }

    for (int i = n-1; i >0; i--)
    {
        cout<<arr[i]<<" ";
    }
    
    
}