#include<iostream>
using namespace std;

class BankAccount{
    int accountNumber;
    string accountHolderName;
    float balance;

    public:
     void setData();
     void deposite();
     void withdraw();
     void displayDetails();

};

void BankAccount::setData() {
    cout<<"Enter account number:"<<endl;
    cin>>accountNumber;
    cout<<"Enter account holder name:"<<endl;
    cin>>accountHolderName;
    cout<<"Enter balance:"<<endl;
    cin>>balance;
}
    void BankAccount::displayDetails(){
    cout<<"Account details:"<<endl;
    cout<<"Account No:"<<accountNumber<<endl<<"Account Holder name"<<accountHolderName<<endl<<"current balance:"<<balance<<endl;

}
void BankAccount::deposite(){
    float amount;
    cout<<"Enter amount deposite:";
    cin>>amount;
    balance=balance+amount;
    cout<<"Amount deposited successfully."<<endl;
     cout<<"Account No:"<<accountNumber<<endl<<"Account Holder name"<<accountHolderName<<endl<<"current balance:"<<balance<<endl;
}
void BankAccount::withdraw(){
    float amount;
    cout<<"Enter amount withdraw:"<<endl;
    cin>>amount;
    balance=balance-amount;
    cout<<"Amount withdrawn successfully."<<endl;
     cout<<"Account No:"<<accountNumber<<endl<<"Account Holder name"<<accountHolderName<<endl<<"current balance:"<<balance<<endl;
}

int main(){
    BankAccount s;
    s.setData();
    s.displayDetails();
    s.deposite();
    s.withdraw();
}