// input 1 2 3
//         9 9
// output 2 2 2
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
vector<int> reverse(vector<int> v) {
    
    int s = 0;
    int e = v.size()-1;
    
    while(s<e)
    {
        swap(v[s++], v[e--]);
    }
    return v;
}

vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	
    int i = n-1;
    int j = m-1;
    vector<int> ans;
    int carry = 0;
    
    while(i>=0 && j>=0) {
        int val1 = a[i];
        int val2 = b[j];
            
        int sum = val1 + val2 + carry;   
        
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
        j--;
    }
    // first case
    while (i>=0)
    {
        int sum=a[i]+carry;
        carry = sum/10;
        sum=sum%10;
        ans.push_back(sum);
        i--;
    }
    
    // second case
    while(j>=0) {
        int sum = b[j] + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        j--;
    }
    // carry case
    while (carry !=0)
    {
        int sum=carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
    }
    //print case
    return reverse(ans);
}
int main()
{
    int a[] = {1, 2, 3};
    int b[]={3,4};
    int n = sizeof(a) / sizeof(a[0]);
    int m=sizeof(b) / sizeof(b[0]);
    vector<int> vecA(a, a + n);
    vector<int> vecB(b, b + m);
    vector<int> result = findArraySum(vecA, n, vecB, m);
    for (int digit : result) {
        cout << digit << " ";
    }
}