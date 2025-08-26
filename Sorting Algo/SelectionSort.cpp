#include<iostream>
using namespace std;
void insertion(int arr[],int n){
    for (int i = 0; i < n-1; i++)
    {
        int minindex=i;
        for (int j = i+1; j<n; j++)
        {
            if (arr[j]<arr[minindex])
            {
                minindex=j;
            }
        }
        swap(arr[i],arr[minindex]);
    }
    
}
int main(){
    int arr[]={11,25,32,12,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    insertion(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

}