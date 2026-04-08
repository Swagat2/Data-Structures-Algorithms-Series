#include<iostream>
using namespace std;
int pivert(int arr[],int n){
    int s=0;
    int e=n-1;
    while (s<e)
    {
        int m=s+(e-s)/2;
        if (arr[m]>=arr[0])
        {
            s=m+1;
        }
        else{
            e=m;
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