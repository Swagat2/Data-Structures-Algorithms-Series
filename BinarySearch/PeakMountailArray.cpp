#include<iostream>
using namespace std;
int peak(int arr[],int n)
{
    int s = 0;
    int e = n- 1;
    while (s < e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
    }
    return s;
}
int main(){
    int arr[]={1,5,4,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int high=peak(arr,n);
    cout << "Peak index is: " << high<<endl;
    cout << "Peak element is: " << arr[high]<<endl;


}