#include <bits/stdc++.h>
using namespace std;

class Matrix{
    int r,c;
    vector<vector<int>> vec;
public:
    void createMatrix() {
        for(int i=0;i<r;i++) {
            vector<int> v;
            for(int j=0;j<c;j++) {
                int x;
                cout<<endl<<"Enter element "<<i+1<<" "<<j+1<<" : ";
                cin>>x;
                v.push_back(x);
            }
            vec.push_back(v);
        }
        cout<<endl<<"...Matrix has successfully been created..."<<endl;
    }
    void display() {
        cout<<endl<<"Matrix elements : "<<endl;
        for(int i=0;i<r;i++) {
            for(int j=0;j<c;j++) {
                cout<<vec[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    int getRow() {
        return r;
    }
    int getColumn() {
        return c;
    }
    void setAt(int rPos,int cPos,int value) {
        vec[rPos-1][cPos-1]=value;
        /*
        vector<int> t;
        t.at(cPos-1)=value;
        vec.at(rPos-1)=t;*/
    }
    Matrix(int row,int col) {
        r=row,c=col;
    }
    friend Matrix multMat(Matrix x,Matrix y);
    friend Matrix sumMat(Matrix x,Matrix y);
    
};
Matrix multMat(Matrix x,Matrix y) {
    Matrix tem(x.getRow(),x.getColumn());
    for(int i=0;i<tem.getRow();i++) {
        for(int j=0;j<tem.getColumn();j++) {
            tem.vec[i][j]=x.vec[i][j]*y.vec[i][j];
        }
    }
    return tem;
}
Matrix sumMat(Matrix x,Matrix y) {
    Matrix tem(x.getRow(),x.getColumn());
    for(int i=0;i<tem.getRow();i++) {
        for(int j=0;j<tem.getColumn();j++) {
            tem.vec[i][j]=x.vec[i][j]+y.vec[i][j];
        }
    }
    return tem;
}
int main() {
    
    Matrix mat1(2,2),mat2(2,2),mat3(2,2),mat4(2,2);
    mat1.createMatrix();
    mat2.createMatrix();
    mat3=multMat(mat1,mat2);
    mat4=sumMat(mat1,mat2);
    mat3.display();
    mat4.display();
}










