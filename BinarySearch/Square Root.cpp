#include<iostream>
using namespace std;          
int findquare(int n){
    if (n==1 || n==0)
    {
        return n;
    }
    int start=1;
    int end=n/2;
    int ans=-1;
    while (start<=end)
    {
        int mid=start+(end-start)/2;
        long long square = 1LL * mid * mid;
        if (square==n)
        {
            return mid;
        }
        if (n>square)
        {
            ans=mid;
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int result=findquare(n);
    cout << "The square root of " << n << " is: " << result << endl;
    return 0;
}