#include <iostream>
using namespace std;

class NavanaLTD{
private:
    string Customer_Name;
    int NID_Number;
    string Purchase_date;
    int Engine_No;
    int Registration_No;
    bool sold=false;
    
public:
friend void soldout(NavanaLTD x);
void changeOwner(string s) {
    Customer_Name=s;
}
void insert_info() {
    cout<<endl<<"Enter Informations : ";
    cout<<endl<<"Name : ";
    cin>>Customer_Name;
    cout<<endl<<"NID number : ";
    cin>>NID_Number;
    cout<<endl<<"Purchase Date : ";
    cin>>Purchase_date;
    cout<<endl<<"Engine no : ";
    cin>>Engine_No;
    cout<<endl<<"Registration no : ";
    cin>>Registration_No;
    cout<<endl<<"Is the car sold ? (Type 1 if sold, else 0) : ";
    cin>>sold;
}
NavanaLTD();
NavanaLTD(string nm,long int nid,string pd,int eno,long int regno,bool soldOrNo) {
    Customer_Name=nm;
    NID_Number=nid;
    Purchase_date=pd;
    Engine_No=eno;
    Registration_No=regno;
    sold=soldOrNo;
}
void output() {
    cout<<endl<<"Informations of sold cars : ";
    cout<<endl<<"Name : "<<Customer_Name;
    cout<<endl<<"NID number : ";
    cout<<NID_Number;
    cout<<endl<<"Purchase Date : ";
    cout<<Purchase_date;
    cout<<endl<<"Engine no : ";
    cout<<Engine_No;
    cout<<endl<<"Registration no : ";
    cout<<Registration_No;
    if(sold==true) {
        cout<<endl<<"The car is sold";
    }
    else cout<<endl<<"The car is not sold";
}
};
void soldout(NavanaLTD x) {
   
    if(x.sold==true) {
        x.output();
    }
}
int main() {
    NavanaLTD cars[5]={{"Sajim",5548785,"20 OCT",22455,488545,true},{"Anik",5548785,"20 SEPT",22455,488545,false},{"Akran",5548785,"25 OCT",22455,488545,true},{"Mitu",5548785,"19 OCT",22455,488545,false},{"Nahid",5548785,"May 9",22455,488545,false}};
    for(int i=0;i<5;i++) {
        soldout(cars[i]);
        cout<<"\n\n";
    }
}