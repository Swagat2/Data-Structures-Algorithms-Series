#include<iostream>
using namespace std;
int piver(int arr[],int n){
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
int binarysearch(int arr[], int s, int e, int key){
    
    while (s<=e)
    {
        int mid=s+(e-s)/2;
        if (arr[mid]==key)
        {
            return mid;
        }
        if (key<arr[mid])
        {
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
}
int main(){
    int arr[]={7,9,1,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=3;
    int pivot = piver(arr, n);
    int result;
    if (key>=arr[pivot] && key<=arr[n-1])
    {
        result = binarysearch(arr, pivot, n - 1, key);
    }
    else{
        result= binarysearch(arr, 0, pivot - 1, key);
    }
     if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }
}