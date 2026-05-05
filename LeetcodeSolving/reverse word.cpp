#include<iostream>
#include<string>
#include<string.h>
using namespace std;
void reverse(string &s,int start,int end){
    while (start<end)
    {
        swap(s[start],s[end]);
        start++;
        end--;
    }
}
int main(){
    string s="my name is swagat";
    int n=s.size();
    int start=0;
    for (int i = 0; i <=s.size(); i++)
    {
        if(i==n||s[i]==' '){
            reverse(s,start,i-1);
            start=i+1;
        }
    }
    cout<<s;
}