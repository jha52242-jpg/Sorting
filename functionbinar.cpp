#include<iostream>
using namespace std;
int binary(int *arr,int n,int key){
int st=0,end=n-1;
while (st<=end)
{
    int mid=(st+end)/2;
    if (arr[mid]==key)
    {
        cout<<mid<<endl;
        return mid;
    }
    else if (arr[mid]<key)
    {
        st=mid+1;
    }
    else{
        end=mid-1;
    }
    cout<<"Not found"<<" ";
}
return 0;
}
int main(){
int arr[]={1,2,3,4,5,6};
int n=sizeof(arr)/sizeof(int);

binary(arr,n,3);



}