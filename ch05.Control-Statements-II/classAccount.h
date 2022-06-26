#include "classDollarAmount33.h"

class Account{
public:

    Account(std::string accountName, DollarAmount money)
        : name{accountName} {

        if(money.getDollars() > 0){
            balance = money;
        }
    }

    void deposit(DollarAmount money){

        if(money.getDollars() > 0){
            balance.add(money);
        }
    }

    void withdraw(DollarAmount money){

        if(money.getDollars() <= balance.getDollars()){
            balance.subtract(money);
        }
    }

    std::string getBalance() const{
        return balance.toString();
    }

    void setName(std::string accountName){
        name = accountName;
    }

    std::string getName() const{
        return name;
    }

private:
    std::string name;
    DollarAmount balance{0,0};
};