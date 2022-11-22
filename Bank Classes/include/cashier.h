#ifndef CASHIER_H
#define CASHIER_H
#include <iostream>
using namespace std;

class cashier
{
protected:
    int static cashier_number;
    int transactions_done;
public:
    cashier(int tr=0,int ca=0){cashier_number=ca;transactions_done=tr;}
    int getCashNum(){return cashier_number;}
    int getAllTrans(){return transactions_done;}
friend class transaction;

};

#endif // CASHIER_H
