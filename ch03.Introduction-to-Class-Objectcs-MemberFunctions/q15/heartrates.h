#include <iostream>
#include <string>
#include "date.h"

class HeartRates{
public:

	HeartRates(std::string iname, std::string ilastName, Date idate)
	: name{iname}, lastName{ilastName}, date{idate} {

	}

	void setName(std::string iname){
		name = iname;
	}

	std::string getName() const{
		return name;
	}

	void setLastName(std::string ilastName){
		lastName = ilastName;
	}

	std::string getLastName() const{
		return lastName;
	}

	void getDate() const{
		// mm / dd / yyy
		std::cout << date.getMonth() << "/" << date.getDay() << "/" << date.getYear() << std::endl;
	}

	int getAge() const{
		int curMonth{12};
		int curDay{12};
		int curYear{2021};

		int age = curYear - date.getYear();

		if(curMonth <= date.getMonth() && curDay < date.getDay()){
			age = age - 1;
		}
		return age;
	}

	int maxHeartRate() const{
		return 220 - getAge();
	}

	double targetHeartRate() const{
		return maxHeartRate() * 0.62;
	}

private:
std::string name;
std::string lastName;
Date date;
};