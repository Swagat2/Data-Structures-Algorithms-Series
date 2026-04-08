#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    long long m;
    cin >> n >> m;
    vector<long long> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int s=0;
    int e=*max_element(arr.begin(), arr.end());
    long long ans = 0;
    while (s<=e)
    {
        long long wood=0;
        int mid=s+(e-s)/2;
        for (int  i = 0; i < arr.size(); i++)
        {
            if (arr[i]>mid)
                {
                long long cut=arr[i]-mid;
                wood=wood+cut;
                }
        }
        if(wood >= m){
                ans = mid;
                s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }
    cout<<ans;
}


