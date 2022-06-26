// Time class definition.
// Member functions are defined in Time.cpp

/**
 * This class provide to constructor with default parameters the current time in system,
 * through time and localtime functions contained in ctime library.
 * */

#include <string>

#ifndef TIME_H
#define TIME_H

class Time{
public:
    Time(int h=-1, int m=-1, int s=-1);

    void setTime(int h, int m, int s);
    void setHour(int h);
    void setMinute(int m);
    void setSecond(int s);

    int getHour() const;
    int getMinute() const;
    int getSecond() const;

    std::string toString() const;

private:
    int hour;
    int minute;
    int second;
};

#endif