
#include<bits/stdc++.h>
using namespace std;

class Time{
    
    int s,m,h;
    
    public:
    friend istream &operator>>(istream &in,Time &t) {
        cout<<"Enter second : ";
        in>>t.s;
        cout<<"Enter minute : ";
        in>>t.m;
        cout<<"Enter hour : ";
        in>>t.h;
        
        return in;
    }
    friend ostream &operator<<(ostream &out,const Time &t) {
        out<<"Time : "<<t.h<<":"<<t.m<<":"<<t.s<<endl;
    }
    bool operator == (Time t) {
        if(t.s==s && t.m==m && t.h==h) return true;
        return false;
    }
    
    
};
int main() {
    Time T1,T2;
    
    cout<<"Time 1 : "<<endl;
    cin>>T1;
    cout<<"Time 2 : "<<endl;
    cin>>T2;
    
    if(T1==T2) {
        cout<<"Time 1 and Time 2 are equal"<<endl;
    }
    else cout<<"Time 1 and Time 2 are not equal"<<endl;
    cout<<"Time 1 : "<<endl<<T1<<endl<<"Time 2 : "<<endl<<T2;
    
}













