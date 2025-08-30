#include<iostream>
#include<vector>
using namespace std;
void merge(int arr1[],int n,int arr2[],int m,int arr3[]){
    int i=0;
    int j=0;
    for (int i = 0; i < ; i++)
    {
        /* code */
    }
    
    // while (i<n&&j<m)
    // {
    //     if (arr1[i]<arr2[j])
    //     {
    //         arr1=arr1[i];
    //         i++;
    //     }
    //     else{
    //         arr1=arr2[j];
    //         j++;
    //     }
    // }
    // //if one loop array finished it will coppy the rest elemnt of 1st
    // while (i<n)
    // {
    //     arr3[k]=arr1[i];
    //     k++;
    //     i++;
    // }
    // //if one loop array finished it will coppy the rest elemnt of 2nd
    // while (j<m)
    // {
    //     arr3[k]=arr2[j];
    //     k++;
    //     j++;
    // } 
}
void print(int ans[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<ans[i]<<" ";
    }
}
int main(){
    int arr1[6]={1,2,3,0,0,0};
    int arr2[3]={2,5,6};

    merge(arr1,6,arr2,3);
    print(arr1,6);

}