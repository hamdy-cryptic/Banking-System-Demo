#include <iostream>

using namespace std;

class account{
protected:
    int  static account_number;
    string name;
    int transactions;
    int static const Size=10;
    float *curr;
    string static const currency_name[];
    account static all_accs[2];
public:
    account(){
    cout<<"Welcome to our trusted banking system, please enter your name:"<<endl;
    cin>>name;
    cout<<"Creating a bank account..."<<endl;
    curr=new float[Size];
    for (int i=0;i<Size;i++){
        *(curr+i)=0;
    }
    cout<<"Account created successfully, your account number is: " <<account_number<<endl;
        all_accs[account_number]=*this;
        account_number++;

    }
    void new_transaction(char x){
    if (x=='s'){
        cout<<"selling transaction is being processed";
        transactions++;
    }
    else if (x=='b'){
        cout<<"buying transaction is being processed";
        transactions++;
    }
    else
        cout<<"error in transaction type: failed process";
    }
    bool deposit(){
    cout<<"enter the value deposit:"<<endl;
    float num;
    cin>>num;
    cout<<"enter the currency type:"<<endl;
    string type;
    cin>>type;
    for (int i=0;i<Size;i++){
        if(type==currency_name[i])
            {*(curr+i)+=num;
              return true;}}
     return false;
    }
    bool withdraw(){
    cout<<"enter the value to withdraw:"<<endl;
    float num;
    cin>>num;
    cout<<"enter the currency type:"<<endl;
    string type;
    cin>>type;
      for (int i=0;i<Size;i++){
        if(type==currency_name[i])
            {if (*(curr+i)>num)
                *(curr+i)-=num;
            else{
                cout<<"Not enough money in balance account, Operation Failed";
            return false;}
              return true;}}
     return false;
    }
    account this_account(string N){
    for (int i=0;i<account_number;i++)
        if(N==all_accs[i].name)
           return all_accs[i];

    }

    friend class report;
    friend account this_account(string N,account arr[]);
};

