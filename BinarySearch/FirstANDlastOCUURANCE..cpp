#include<iostream>
using namespace std;
int occurance(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int ans = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
    }
    return ans;
}
int lastoccurance(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int ans = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
    }
    return ans;
}
int main(){
    int arr[]={1,2,3,3,3,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=3;
    cout << "First Occurrence of " << key << " is at index: " << occurance(arr, n, key) << endl;
    cout << "Last Occurrence of " << key << " is at index: " << lastoccurance(arr, n, key) << endl;
    return 0;
}