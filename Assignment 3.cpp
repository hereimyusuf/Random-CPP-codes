#include <bits/stdc++.h>
using namespace std;

class _3x3Matrix{
    int m[3][3];
public:
    void createMatrix() {
        for(int i=0;i<3;i++) {
            for(int j=0;j<3;j++) {
                cout<<endl<<"Enter element "<<i+1<<" "<<j+1<<" : ";
                cin>>m[i][j];
            }
        }
        cout<<endl<<"3 x 3 Matrix has successfully been created"<<endl;
    }
    void display() {
        cout<<endl<<"Matrix elements : "<<endl;
        for(int i=0;i<3;i++) {
            for(int j=0;j<3;j++) {
                cout<<m[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    friend _3x3Matrix multiplied(_3x3Matrix x,_3x3Matrix y);
};
_3x3Matrix multiplied(_3x3Matrix x,_3x3Matrix y) {
    _3x3Matrix tem;
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            tem.m[i][j]=x.m[i][j]*y.m[i][j];
        }
    }
    return tem;
}
int main() {
    _3x3Matrix mat1,mat2,mat3;
    mat1.createMatrix();
    mat2.createMatrix();
    
    mat3=multiplied(mat1,mat2);
    mat3.display();
}










