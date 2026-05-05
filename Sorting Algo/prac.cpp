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
#if 0
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
#endif
#if 0
// 3. Sort and Count Swaps (Important)
// 📥 Input
// [3, 2, 1]
// 📤 Output
// Sorted: [1, 2, 3]
// Swaps: 3
#include<iostream>
using namespace std;
int bubblesort(int arr[],int n){
    int count=0;
    for (int i = 1; i < n-1; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            if (arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                count++;
            }
        }
    }
    return count;
}
int main(){
    int arr[]={5, 1, 4, 2, 8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int count=bubblesort(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<count<<" ";
}
#endif
//
// INSERTION SORT
#if 1
#include<iostream>
using namespace std;
int main(){
    int arr[]={10,1,7,4,8,2,11};
    int n=sizeof(arr)/sizeof(arr[0]);
    for (int i = 1; i < n; i++)
    {
        int j=i-1;
        int key=arr[i];
        while (j>=0&&arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key
        
    }
    
}
#endif