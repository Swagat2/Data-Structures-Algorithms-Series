#include<iostream>
using namespace std;
int binarysearch(int arr[],int index,int m){
    int start=0;
    int end=m-1;
    
    while (start<=end)
    {
        int mid = start+(end - start) / 2;
        if (arr[mid]==index){
            return mid;
        }
        if (index<arr[mid])
        {
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter the array size : ";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout<<endl;
    int index;
    cout<<"Enter the index element :";
    cin>>index;
    int m = sizeof(arr)/sizeof(arr[0]);
    int result= binarysearch(arr,index,m);
    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }
}