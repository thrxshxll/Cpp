// Time class member-functions definitions.
#include <sstream>
#include <iomanip>
#include <ctime>
#include "Time.h"
using namespace std;


Time::Time(int h, int m, int s){
    if(h==-1 && m==-1 && s==-1){
        time_t currentTime{time(nullptr)}; // current time since epoch
        tm tHMS{*(localtime(&currentTime))}; // time converted to calendar time expressed as local time
        setTime(tHMS.tm_hour, tHMS.tm_min, tHMS.tm_sec);
    }else{
        setTime(h,m,s);
    }
}

void Time::setTime(int h, int m, int s){
    setHour(h);
    setMinute(m);
    setSecond(s);
}

void Time::setHour(int h){
    hour=h;
}

void Time::setMinute(int m){
    minute=m;
}

void Time::setSecond(int s){
    second=s;
}

int Time::getHour() const{
    return hour;
}
int Time::getMinute() const{
    return minute;
}
int Time::getSecond() const{
    return second;
}

std::string Time::toString() const{
    ostringstream out;
    out << setfill('0') << setw(2) << hour << ":" << setw(2) << minute << ":"
    << setw(2) << second;
    return out.str();
}