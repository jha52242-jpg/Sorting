#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int arr[]={3,4,-5,6,7};
    int n=sizeof arr/sizeof (int);
    int maxsum= INT_MIN;
    int sum=0;
    for (int i = 0; i <n; i++)
    {    
        sum=sum+arr[i];
        maxsum=max(maxsum,sum);
        if(sum<0){
            sum=0;
        }
    }
    cout<<maxsum;
}