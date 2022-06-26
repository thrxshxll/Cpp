#include <array>
#include <string>

#ifndef TEST_H
#define TEST_H

class Person{
public:
    Person();
    explicit Person(const std::string&, int);

    std::string toString() const;

private:
    std::string name;
    unsigned int age;
};

#endif