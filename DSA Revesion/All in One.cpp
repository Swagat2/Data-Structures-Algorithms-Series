#if 0
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={3,5,1,8,2};
    int maxi=arr[0];
    int n=sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        maxi=max(maxi,arr[i]);
    }
    cout<<"max element is : "<<maxi;
}
#endif

#if 0
//[1,2,3,4,5]

#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    bool issorted=true;
    for (int i = 1; i < n; i++)
    {
        if (arr[i-1]>arr[i])
        {
            issorted=false;
            break;
        }
    }
    cout << (issorted ? "array is sorted":"array is not sorted");
}
#endif

#if 0
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={3,5,1,8,2};
    int maxi=arr[0];
    int n=sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        maxi=max(maxi,arr[i]);
    }
    int secondmax=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>secondmax&&arr[i]!=maxi){
            secondmax=arr[i];
        }
    }
    cout<<"Second maximum is :"<<secondmax;
}
#endif
#if 1
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,1,2,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans[]={};
    for ( i = 0; i < n; i++)
    {
        ans=arr[i]^
    }
    for
    cout<<ans[i]<<" ";
}
#endif