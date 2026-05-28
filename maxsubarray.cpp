#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int arr[]={3,4,5,6,7};
    int n=sizeof arr/sizeof (int);
    int maxsum= INT_MIN;
    for (int i = 0; i <n; i++)
    {
        for (int j = i; j <n; j++)
        {int sum=0;
            for (int k = i; k <= j; k++)
            {
                sum=sum+arr[k];
            }
            cout<<sum<<" ";
            maxsum=max(maxsum,sum);
        }
        cout<<endl;
        
    }
    cout<<maxsum;
}