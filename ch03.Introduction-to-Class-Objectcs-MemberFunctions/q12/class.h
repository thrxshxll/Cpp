#include <iostream>

class Date{
public:

	Date(int imonth, int iday, int iyear)
	: day{iday}, year{iyear} {

		if(imonth < 1 || 12 < imonth){
			month = 1;
		}else{
			month = imonth;
		}

	}

	void setMonth(int imonth){
		month = imonth;
	}
	
	int getMonth() const{
		return month;
	}

	void setDay(int iday){
		day = iday;
	}

	int getDay() const{
		return day;
	}

	void setYear(int iyear){
		year = iyear;
	}

	int getYear() const{
		return year;
	}

	void displayDate(){
		std::cout << month << "/" << day << "/" << year << std::endl;
	}

private:
	int month;
	int day;
	int year;
};