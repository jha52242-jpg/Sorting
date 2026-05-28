#include<iostream>
using namespace std;
int main(){
    int arr[]={2,36,55,8,9,7,33};
    int n=sizeof(arr)/sizeof(int);
    for (int i = 0; i <n-1; i++)
    {
        int small=i;
        for (int j =i+1; j <n; j++)
        {
            if (arr[j]<arr[small])
            {
                small=j;
            }
            
        }
        swap(arr[i],arr[small]);
    }
     for (int k = 0; k <n; k++)
    {
        cout<<arr[k]<<' ';
    }
}