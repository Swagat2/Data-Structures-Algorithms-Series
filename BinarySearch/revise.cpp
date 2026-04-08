 #if 0
 #include<iostream>
 using namespace std;
 int firstoccurance(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    int ans=-1;
    while (s<=e)
    {
        int mid=s+(e-s)/2;
        if (arr[mid]==key)
        {
            ans=mid;
            e=mid-1;
        }
        else if (key>arr[mid])
        {
            s=mid+1;
        }
        else{
            e=mid-1;
        }        
    }
    return ans;
 }
 int lastoccurance(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    int ans=-1;
    while (s<=e)
    {
        int mid=s+(e-s)/2;
        if (arr[mid]==key)
        {
            ans=mid;
            s=mid+1;
        }
        else if (key>arr[mid])
        {
            s=mid+1;
        }
        else{
            e=mid-1;
        }        
    }
    return ans;
 }
 int main(){
    int arr[]={1,2,3,3,3,3,3,3,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=3;
    int first = firstoccurance(arr, n, key);
    int last = lastoccurance(arr, n, key);
    int totaloccur=(last-first)+1;
    cout<<"Total no of occurance = "<<totaloccur;
 }
 #endif
 #if 1
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
        int arr[]={3,8,10,2,5};
        int n=sizeof(arr)/sizeof(arr[0]);
        int pivotIndex=pivert(arr,n);
        cout << "Pivot index (smallest element): " << pivotIndex << endl;
        cout << "Pivot element: " << arr[pivotIndex] << endl;   
    }
 #endif