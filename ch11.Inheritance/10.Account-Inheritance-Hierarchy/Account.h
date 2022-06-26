// Account class definition.
// Account class member funtions are defined in Account.cpp

#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account{
public:
    explicit Account(double =0.0);

    void setBalance(double);
    double getBalance() const;

    bool credit(double);
    bool debit(double);
    

private:
    double balance;
};

#endif