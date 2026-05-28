#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={2,5,1,2,6,4,9,7};
    int n=sizeof(arr)/sizeof(int);
    //sort(arr,arr+n);

    sort(arr,arr+n,greater<int>());

    for (int i = 0; i <n; i++)
    {
        cout<<arr[i];
    }
    



}