//
// Created by Bunjamin on 3/15/2021.
//
/*Define a class Circle with:
radius float
number π const float.
Implement in the class:
default constructor and constructor with arguments
method for area computation
method for perimeter computation
method that compares the area and the perimeter.*/
#include <iostream>
using namespace std;

class Circle {
private:
    float r;
    float PI;
public:
    Circle(float _r=0, float _PI=3.14){
        r=_r;
        PI=_PI;
    }
    float area(){
        return (r*r)*PI;
    };
    float perimeter(){
        return 2*PI*r;
    }
    bool equal(){
        if (area()==perimeter()){
            return true;
        }
        else{
            return false;
            }

    }



};

int main() {
    float r;
    cin >> r;
    //instanciate object from class Circle
    Circle c(r);

    cout << c.perimeter() << endl;
    cout << c.area() << endl;
    cout << c.equal() <<endl;
    return 0;
}