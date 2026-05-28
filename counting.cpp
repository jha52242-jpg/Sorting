#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={1,5,9,7,2,1,5,3};
    int n=sizeof(arr)/sizeof(int);

    int freq[10000]={0};
    int minval=INT_MAX, maxval=INT_MIN;

    for (int i = 0; i <n; i++)
    {
    freq[arr[i]]++;
    minval=min(minval,arr[i]);
    maxval=max(maxval,arr[i]);
    }
    for (int i =minval,j=0; i<=maxval; i++)
    {
        while (freq[i]>0)
        {
            arr[j++]=i;
            freq[i]--;
        }
    
    }
    for (int i = 0; i < n; i++)
    {
         cout<<arr[i];
    }
    

    
    
    
}