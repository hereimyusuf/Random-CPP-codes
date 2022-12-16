#include <bits/stdc++.h>
using namespace std;

class Vector{
    vector<int> v;
    int n;
public:
    void createVector() {
        cout<<"How many elements?"<<endl;
        cin>>n;
        for(int i=0;i<n;i++) {
            cout<<endl<<"Enter vector element no "<<i+1<<" : ";
            int x;
            cin>>x;
            v.push_back(x);
        }
        cout<<"Vector has succecfully been created"<<endl;
    }
    void modifyValue(int index,int value) {
        v[index-1]=value;
    }
    void multiplyBy(int x) {
        for(int i=0;i<n;i++) {
            v[i]=v[i]*x;
        }
    }
    void display() {
        cout<<"Vector elements : ";
        for(int i=0;i<n;i++) {
            cout<<v[i]<<", ";
        }
        cout<<endl;
    }
    
};
int main() {
    Vector vec1;
    vec1.createVector();
    vec1.multiplyBy(3);
    vec1.modifyValue(5,99);
    vec1.display();
}










