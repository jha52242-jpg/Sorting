#include<iostream>
using namespace std;
int main(){
    int arr[]={10,6,2,3,8,9,7};
    int n=sizeof arr/sizeof(int);
    int min=arr[0];
    int b=0;
    int c=0;
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
            b=i;
        }
    }
    int max=arr[b];
    for(int j=b;j<n;j++){
        if(arr[j]>max){
            max=arr[j];
            c=j;
        }
    }
    cout<<"purchase day of stock is "<<b<<"at price of"<<arr[b]<<endl;
    cout<<"sales day of stock is "<<c<<"at price of "<<arr[c]<<endl;
    int profit=max-min;
    cout<<"Profit "<<profit;
}