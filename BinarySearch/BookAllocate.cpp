#include <iostream>
using namespace std;
int ispossible(int arr[], int n, int m, int mid)
{
    int student = 1;
    int pagesum = 0;
    for (int i = 0; i < n; i++)
    {
        if (pagesum + arr[i] <= mid)
        {
            pagesum=pagesum+arr[i];
        }
        else
        {
            student++;
            if (student > m || arr[i] > mid)
            {
                return false;
            }
            pagesum = arr[i];
        }
    }
    return true;
}
int allocateBook(int arr[], int n, int m)
{
    int s = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int e = sum;
    int ans = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (ispossible(arr, n, m, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return ans;
}
int main()
{
    int arr[] = {10, 20, 30, 40};
    int m = 2;
    int n = 4;
    int result = allocateBook(arr, n, m);
    cout << result;
}

#include<iostream>
using namespace std;
bool ifpossible(int arr[],int ,.int k,int m){
    int student=1;
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if (count + arr[i]<=mid )
        {
            count=scount+arr[i];
        }
        else{
            student++;
            if (count>m || arr[i]>mid)
            {
                return false;
            }
            count=arr[i];
        }
    }
    return true;
}