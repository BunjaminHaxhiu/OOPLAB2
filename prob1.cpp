//
// Created by Bunjamin on 3/14/2021.
//
//Define a class Angle that is described with:
//degrees, minutes and seconds (int).
//For the class implement: constructor get and set methods
//method for computing the angle in seconds.
//Define a method for checking if the angle is valid (the values for attributes are in the valid range).
//One angle is valid if it is in the range of [0,0,0 ; 360,0,0]
#include <iostream>
using namespace std;
class Angle{
private:
    int Degrees, Minutes, Seconds;
public:
    Angle(int _Degrees = 1, int _Minutes = 1, int _Seconds = 1){
        Degrees = _Degrees;
        Minutes = _Minutes;
        Seconds = _Seconds;
    }
    //Getters
    int getDegrees(){
        return Degrees;
    }
    int getMinutes(){
        return Minutes;
    }
    int getSeconds(){
        return Seconds;
    }
    //setters
    void setDegrees (int _Degrees){
        Degrees = _Degrees;
    }
    void setMinutes (int _Minutes){
        Minutes = _Minutes;
    }
    void setSeconds (int _Seconds){
        Seconds = _Seconds;
    }
    double toSeconds(){
        return (Degrees*3600)+(Minutes*60)+Seconds;
    }
};


bool check(int deg, int min, int sec){

        return (deg % 360) + (deg < 0 ? 360 : 0);
}

bool checkAngle (Angle a1, int deg, int min, int sec) {
    return a1.getDegrees()==deg && a1.getMinutes()==min && a1.getSeconds()==sec;
}

int main() {

    //instanciate object of class Angle, named a1
    Angle a1;
    int deg, min, sec;


    cin >> deg >> min >> sec;

    if (check(deg, min, sec)) {

        a1.setDegrees(deg);
        a1.setMinutes(min);
        a1.setSeconds(sec);
        cout << a1.toSeconds();

        if (checkAngle(a1,deg,min,sec)) {
            cout<<"Don't change the internal state of the private variables in the class!!!!";
        }

    } else {
        cout << "Invalid values" << endl;
    }

    return 0;
}