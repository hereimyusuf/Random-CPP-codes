#include <bits/stdc++.h>
using namespace std;
class calender{
private:    
    int date;
    int month;
    int year;
    
public:
    void showDate() {
        cout<<"Date : "<<date<<endl;
        cout<<"Month : "<<month<<endl;
        cout<<"Year : "<<year<<endl;
    }
    
    
    //You can input by parameter if you want or access the object properties by changing the privacy of the data members to public
    calender(int d,int m,int y) {
        date=d;
        month=m;
        year=y;
    }
    //Default constructor to skip parameterized constructor
    calender(){};
    calender operator+(int days)
    {
        calender x;
        x.date=date;
        x.month=month;
        x.year=year;
        
        
        int y=days/365;
        days%=365;
        int m=days/30;
        days%=30;
        int d=days;
        
        x.date+=d;
        x.month+=m;
        x.year+=y;
        
        if(x.date>30) {
            x.date%=30;
            x.month++;
            if(x.month>12) {
                x.month%=12;
                x.year++;
            }
        }
        
        return x;
   }
};
int main() {
    
    calender currentdate(28,11,2022);
    cout<<"Current date : "<<endl;
    currentdate.showDate();
    cout<<"Birthday of Raisa : "<<endl;
    calender RaisaBD=currentdate+39;
    RaisaBD.showDate();
    
}









