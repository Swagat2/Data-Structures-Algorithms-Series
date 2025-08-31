#include<iostream>
using namespace std;
string Compression(string s){
    int i=0;
    int ansIndex=0;
    int n=s.length();
    while (i<n)
    {
        int j=i+1;
        while (j<n && s[i]==s[j])
        {
            j++;
        }
        s[ansIndex++] = s[i];
        int count =j-i;
        if (count > 1)
        {
            string cnt=to_string(count);
            for (char c : cnt)
            {
                s[ansIndex++] = c;
            }
            
        }
        i=j;
    }
    return s.substr(0, ansIndex);
}
int main(){
    string s = "aabbccc";
   
    cout << Compression(s) << endl;

}