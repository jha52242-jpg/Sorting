#include<iostream>
using namespace std;
int main(){
    int arr[]={3,66,78,98,34};
    int n=sizeof arr/sizeof (int);
    int key=98;
    for (int i = 0; i <n; i++)
    {
        if (arr[i]==key)
        {
            cout<<i<<endl;
            return 0;
        }
    }
    
    cout<<"-1"<<endl;
}
