#include<iostream>
using namespace std;

class bankAcc{
    
    string name;
    int accountNumber;
    string accountType;
    int balance;
    
    public:
    void setDefault(string n,int an,string at,int balan) {
        name=n;
        accountNumber=an;
        accountType=at;
        balance=balan;
    }
    
    void deposite() {
        int n;
        cout<<"Enter amount to deposit : "<<endl;
        cin>>n;
        balance+=n;
        cout<<"Deposit of Taka "<<n<<" is successful..."<<endl;
        cout<<"Your current balance is "<<balance<<" Taka..."<<endl;
    }
    void withdraw() {
        if(balance<1000) {cout<<"Not enough balance to withdraw. You need to have more than thousand taka in your account to withdraw. Please deposite some money."<<endl;
        deposite();
        withdraw();    
        }
        else {
            cout<<"Your current balance is "<<balance<<" Taka. you can withdraw not more than "<<balance-1000<<" Taka."<<endl;
                    int n;
            cout<<"Enter withdrawal amount : "<<endl;
            cin>>n;
            if(n>balance-1000) {cout<<"You must have at least 1000 Taka in your account preserved. Choose a lower amount"<<endl;
                withdraw();}
            else {
                balance-=n;
                cout<<"Withdraw successful. Your current balance is "<<balance<<" Taka."<<endl;
            }

        }
    }
    void info() {
        cout<<"Name of account owner : "<<name<<endl<<"Account number : "<<accountNumber<<endl<<"Current balance : "<<balance<<endl<<"Account type : "<<accountType<<endl;
    }
    
    
};
int main() {
    bankAcc ac1;
    ac1.setDefault("Yusuf",22103152,"Student",830);
    ac1.info();
    ac1.withdraw();
    ac1.info();
    
}