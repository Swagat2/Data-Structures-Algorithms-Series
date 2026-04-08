#include<iostream>
using namespace std;
int selectionsort(int arr[],int n){
    for (int i = 0; i < n-1; i++)
    {
        int minidex=i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[j]<arr[minidex])
            {
                minidex=j;
            }
        }
        swap(arr[i],arr[minidex]);
        
    }
    return 0;
}
int main(){
    int arr[]={3,5,6,7,2,1,9,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    selectionsort(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}