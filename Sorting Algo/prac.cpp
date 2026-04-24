//Basic Bubble Sort (Foundation)
//[5, 1, 4, 2, 8]
#if 0
#include<iostream>
using namespace std;
void bubblesort(int arr[],int n){
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            if (arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int main(){
    int arr[]={5, 1, 4, 2, 8};
    int n=sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
#endif
// Move Largest Element to End (Single Pass)
// [5, 1, 4, 2, 8]
// [1, 4, 2, 5, 8]  ans
#include<iostream>
using namespace std;
void bubblesort(int arr[],int n){
        for (int j = 0; j < n-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
}
int main(){
    int arr[]={5, 1, 4, 2, 8};
    int n=sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}