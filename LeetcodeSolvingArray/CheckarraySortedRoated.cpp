// 3 4 5 1 2  true
// 1 2 3 4 5  true
// 3 5 7 1 6  false
#include <iostream>
#include <cmath>
using namespace std;
bool check(int arr[],int n){
    int count=0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i-1]>arr[i])
        {
            count++;
        }
    }
    if (arr[n-1]>arr[0])
    {
        count++;
    }
    return count==1;
    
    
}
int main()
{
    int arr[] = {3, 5, 7, 1, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result=check(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }cout<<endl;
    if (result==true)
    {
        cout<<"Its is sorted and rotated";
    }
    else{
        cout<<"Not sorted ";
    }
}
