// input {1,2,3,4,5,6}
// output ={1 2 3 4 6 5}
#include<iostream>
#include<cmath>
using namespace std;
void posreverse(int arr[],int n,int m){
    int s=m+1;
    int e=n-1;
    while (s<=e)
    {
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}
int main(){
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int m=3;
    posreverse(arr,n,m);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}