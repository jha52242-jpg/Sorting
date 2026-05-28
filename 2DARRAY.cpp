#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    cin>>m;
    int arr[n][m];
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; i <m; j++)
        {
            cin>>arr[i][j];
        }
        
    }
     for (int i = 0; i <n; i++)
    {
        for (int j = 0; i <m; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        
    }
    

    
}