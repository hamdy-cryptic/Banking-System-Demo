#include <iostream>
#include <fstream>
#include <account.h>
#include <date.h>
using namespace std;
class report
{
    protected:
account report_account;
    public:
        report(char x){
        if (x=='P'){
            cout<<"Please enter your account name to get Profit Report:"<<endl;
            string name;
            cin>>name;
            report_account.this_account(name);
            cout<<"enter account number for validation:"<<endl;
            int num;
            cin>>num;
            if (num==report_account.account_number){
                cout<<"Data entered is correct. Enter Start Date (dd mm yy):"<<endl;
                int d,m,y;
                cin>>d>>m>>y;
                date start(d,m,y);
                cout<<" Enter End Date (dd mm yy):"<<endl;
                cin>>d>>m>>y;
                date End(d,m,y);
                //TRANSACTION SEARCH HERE
                //ADD ALL BUY TRANSACTIONS
                //ADD ALL SELL TRANSACTIONS
                //PROFIT = SELL-BUY
                cout<<"for profits between ";
                start.print_date();
                cout<<"and";
                End.print_date();
               // cout<<"Profit in EGP is: " <<profit<<endl;
            }
            else{cout<<"account data entered is invalid... process terminated"<<endl;}
        }
        else if(x=='B'){
            cout<<"Please enter your account name to get Currency Balance Report:"<<endl;
            string name;
            cin>>name;
            report_account.this_account(name);
            cout<<"enter account number for validation:"<<endl;
            int num;
            cin>>num;
            if (num==report_account.account_number) {
                cout<<"Data entered is correct.. processing balance report"<<endl;
                for (int i=0;i<report_account.Size;i++)
                    cout<<report_account.currency_name[i]<<"\t"<<report_account.curr[i]<<endl;
            }
            else{
                cout<<"account data entered is invalid... process terminated"<<endl;
            }
        }
        else if(x=='E'){
            //Print the exchange Rates for all currencies (put all class objects in array)
        }
        }
};

