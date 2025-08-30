#include<iostream>
using namespace std;
string replace(string &s){
    string ran="@40";
    string temp="";
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i]==' ')
        {
            temp+=ran;
        }
        else{
            temp+=s[i];
        }
    }
    return temp;

    
}
int main(){
    string s="Swagat pradhan";
    cout<<replace(s);
}