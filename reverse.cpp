#include<iostream>
using namespace std;
int main(){
    int arr[]={2,55,87,95,36,860};
    int n=sizeof arr/sizeof(int);

    for (int i=n-1; i>=0; i--)
    {
        cout<<arr[i]<<" ";
    }
    
}