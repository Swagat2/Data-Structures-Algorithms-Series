// input {0,1,0,3,12};
// ouput {1 3 12 0 0} 
#include<iostream>
#include<vector>
using namespace std;
void removez(int arr[],int n){
    int i=0;
    for (int j = 0; j < n; j++)
    {
        if (arr[j] !=0)
        {
            swap(arr[j],arr[i]);
            i++;
        }
        
    }
}
int main(){
    int arr[]={0,1,0,3,12};
    int n=sizeof(arr)/sizeof(arr[0]);
    removez(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}