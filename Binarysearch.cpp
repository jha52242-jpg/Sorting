#include<iostream>
using namespace std;
int main(){
    int arr[]={6,8,12,15,18};
    int key=20;
    int n=sizeof arr/sizeof(int);
    int start=0;
    int end=n-1;
    for (int i = 0; start<=end; i++)
    {
        int mid=(start+end)/2;
        if(arr[mid]==key){
            cout<<mid;
            return 0;
        }
        else if(arr[mid]<key){
             start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    
}