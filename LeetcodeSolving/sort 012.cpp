#include<iostream>
using namespace std;
void sortOne(int arr[],int n){
    int first=0;
    int last=n-1;
    while (first<=last)
    {
        int mid=first+(last-first)/2;
        if(arr[first]==0){
            first++;
        }
        else if (arr[last]==1)
        {

          last--;
        }
        else{
            while (arr[first]==1 &&arr[last]==0)
            {
                swap(arr[first],arr[last]);
            }
            
        }
        
    }
    
}
void printarray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[8]={1,1,0,0,0,0,1,0};
    sortOne(arr,8);
    printarray(arr,8);
    return 0;

}