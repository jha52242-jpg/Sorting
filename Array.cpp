#include<iostream>
using namespace std;
int main(){
    int arr[5];
   /* cout<<"Enter the value of array"<<endl;
    cin>>arr[0];
    cin>>arr[1];
    cin>>arr[2];
    cin>>arr[3];
    cin>>arr[4];
cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<" "<<arr[3]<<" "<<arr[4];
*/
int n=sizeof arr/sizeof (int);
for (int i = 0; i <n; i++)
{
    cin>>arr[i];
}
for (int i = 0; i <n; i++)
{
    cout<<arr[i]<<' ';
}

}