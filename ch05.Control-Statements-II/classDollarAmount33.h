#include <string>
#include <cmath>

class DollarAmount{
public:
    DollarAmount(int64_t d, int64_t c) : dollars{d}, cents{c} {}

    void add(DollarAmount right){

        dollars += right.dollars;
        cents+=right.cents;

        if(cents>=100){
            dollars++;
            cents %= 100;
        }
    }

    void subtract(DollarAmount right){
        
        dollars -= right.dollars;
        cents -= right.cents;

        if(cents<=0){
            dollars--;
            cents += 100;
        }
    }

    void divide(int den){

        dollars = dollars * 100 + cents;
        dollars /= den;

        cents = dollars % 100;
        dollars /= 100;
    }

    void addInterest(int rate, int divisor){

        int64_t penny{dollars * 100 + cents};

        DollarAmount interest{ penny * rate , 0 };

        interest.dollars = (interest.dollars + divisor/2)/divisor;

        interest.cents = interest.dollars % 100;
        interest.dollars /= 100;

        add(interest);
    }

    std::string toString() const{
        std::string pdollar{std::to_string(dollars)};
        std::string pcent{std::to_string(std::abs(cents))};

        return pdollar + "." + (pcent.size() == 1 ? "0" : "") + pcent;
    }

    void setDollars(int64_t pdollar){
        dollars = pdollar;
    }

    int64_t getDollars() const{
        return dollars;
    }

    void setCents(int64_t pcent){
        cents = pcent;
    }

    int64_t getCents() const{
        return cents;
    }

private:
    int64_t dollars{0};
    int64_t cents{0};
};