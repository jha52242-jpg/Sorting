#include<stdio.h>
int main(){
    int arr[]={23,25,12,17,18,55};
    int n=6;
    for (int i = 0; i <n; i++)
    {
        int curr=arr[i];
        int pre=i-1;
        while (pre>=0&&arr[pre]>curr)
        {arr[pre + 1] = arr[pre];
            pre--;
        }
          arr[pre + 1] = curr;
    }
    for (int i = 0; i <n; i++)
    {
        printf("%d",arr[i]);
    }
}