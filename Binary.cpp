#include<iostream>
using namespace std;
int main(){
int arr[]={1,2,3,4,5,6,7};
int n=sizeof(arr)/sizeof (int);
int key=5;
int st=0,end=n-1;
while (st<=end)
{
    int mid=(st+end)/2;
    if(arr[mid]==key){
        cout<<mid;
    return mid;
    }
    else if (arr[mid]<key)
    {
        st=mid + 1;
    }
    else
    {
        end=mid-1;
    
    }
}
cout<<"Not found";
return -1;

}