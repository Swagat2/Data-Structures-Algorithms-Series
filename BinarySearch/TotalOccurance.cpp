#include<iostream>
using namespace std;
int firstoccurance(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int ans=-1;
    while (start<=end)
    {
        int mid=start+(end-start)/2;
        if (arr[mid]==key)
        {
            ans=mid;
            end=mid-1;
        }
        if (arr[mid]>key)
        {
            end=mid-1;
        }
        else if (arr[mid]<key)
        {
            start=mid+1;
        }
    }
    return ans;  
}
int lastoccurance(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int ans=-1;
    while (start<=end)
    {
        int mid=start+(end-start)/2;
        if (arr[mid]==key)
        {
            ans=mid;
            start=mid+1;
        }
        if (arr[mid]>key)
        {
            end=mid-1;
        }
        else if (arr[mid]<key)
        {
            start=mid+1;
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
    int totaloccur=(last-first)+1;// int totaloccur = last - first + 1;
    cout<<"Total number of occurance :"<<totaloccur;
    
} 