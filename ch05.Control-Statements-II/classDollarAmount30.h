#include <string>
#include <cmath>

class DollarAmount{
public:
    DollarAmount(int64_t dollar, int64_t cent) : amount{dollar*100 + cent} {}

    void add(DollarAmount right){
        amount += right.amount;
    }

    void subtract(DollarAmount right){
        amount -= right.amount;
    }

    void divide(int den){
        amount /= den;
    }

    void addInterest(int rate, int divisor){

        DollarAmount interest{ amount * rate , 0 };

        interest.amount/=100;

        interest.amount = (interest.amount + divisor/2)/divisor;

        add(interest);
    }

    std::string toString() const{
        std::string dollars{std::to_string(amount/100)};
        std::string cents{std::to_string(std::abs(amount%100))};

        return dollars + "." + (cents.size() == 1 ? "0" : "") + cents;
    }


private:
    int64_t amount{0};
};