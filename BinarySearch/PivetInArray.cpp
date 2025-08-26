#include<iostream>
using namespace std;
int pivert(int arr[],int n){
    int s=0;
    int e=n-1;
    while (s<e)
    {
        int mid=s+(e-s)/2;
        if (arr[mid]>=arr[0])
        {
            s=mid+1;
            
        }
        else{
            e=mid;
        } 
    }
    return s;
}
int main(){
    int arr[]={3,8,10,17,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int pivotIndex=pivert(arr,n);
    cout << "Pivot index (smallest element): " << pivotIndex << endl;
    cout << "Pivot element: " << arr[pivotIndex] << endl;   
}