#include <bits/stdc++.h>
using namespace std;

bool operator==(string t,string u) {
    if(t.length()==u.length()) {
        for(int i=0;i<t.length();i++) {
            if(t[i]!=u[i]) return false;
        }
        return true;
    }
    return false;
}

int main() {
    
    string S1,S2;
    cin>>S1>>S2;
    
    if(S1==S2) cout<<"Strings are equal"<<endl;
    else cout<<"Strings are not equal"<<endl;
    
}