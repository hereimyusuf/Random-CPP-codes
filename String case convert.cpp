#include<bits/stdc++.h>
using namespace std;


string operator !(string s) {
    string t="";
    for (int i=0;i<s.length();i++) {
        if(islower(s[i])) t+=toupper(s[i]);
        else t+=tolower(s[i]);
    }
    return t;
}

int main()
{
    string a,b;
    cin>>a;
    b=!a;
    cout<<b;
    
    
}