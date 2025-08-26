#include <iostream>
using namespace std;
void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp=arr[i];
        int j=i-1;
        while (j>=0 && arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=temp; 
    }
    // using for loop concept
    // for (int i = 1; i < n; i++)
    // {
    //     int temp=arr[i];
    //     int j=i-1;
    //     for (; j >= 0;j--)
    //     {
    //         if (arr[j]>temp)
    //         {
    //             arr[j+1]=arr[j];
    //         }
    //         else{
    //             break;
    //         }
    //     }
    //     arr[j+1]=temp;
    // }
    
}
int main()
{
    int arr[] = {9, 7, 3, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
}
