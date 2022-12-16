#include<bits/stdc++.h>
using namespace std;

class Matrix{
    
    int a[3][3];
public:

    void input() {
        for(int i=0;i<3;i++) {
            for(int j=0;j<3;j++) {
                cout<<"Enter element "<<i+1<<','<<j+1<<endl;
                cin>>a[i][j];
            }
        }
    }
    void output() {
        cout<<"The matrix : "<<endl;
        for(int i=0;i<3;i++) {
            cout<<"R"<<i+1<<" ";
            for(int j=0;j<3;j++) {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    Matrix operator-() {
        Matrix x;
        for(int i=0;i<3;i++) {
            for(int j=0;j<3;j++) {
                x.a[i][j]=-a[i][j];
            }
        }
        return x;
    }
    
};

int main() {
    
    Matrix M1,M2;
    M1.input();
    cout<<"Before negate : "<<endl;
    M1.output();
    cout<<"After negate : "<<endl;
    M2=-M1;
    M2.output();
    
    
}













