/**
 * Basic Rectangle class to calculate rectangle's perimeter and area
 * */


// Rectangle class definition.
// Member functions are defined in Rectangle.cpp

class Rectangle{
public:
    // constructor
    Rectangle(double =1, double =1);

    double perimeter();
    double area();

    // set functions
    void setLength(double);
    void setWidth(double);

    // get functions
    double getLength() const;
    double getWidth() const;

private:
    double length{1};
    double width{1};
};