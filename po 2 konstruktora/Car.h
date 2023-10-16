#include<iostream>
#include<locale>
#include<string>
#include<Windows.h>
using namespace std;

class Car
{
    int fuel;
    int wheels = 6;
    int doors = 4;
    int number_of_seats = 7;
    string Color = "White";
    int steering_wheel = 1;
public:
    Car();
    Car(int seats, int wheel, int doors, int fuel, int wheels);
    void SetNumberOfSeats(int number_of_seats);
    const int GetNumberOfSeats();
    void SetSteeringWheel(int steering_wheel);
    const int GetSteeringWheel();
    void SetDoors(int doors);
    const int GetDoors();
    void SetFuel(int fuel);
    const int GetFuel();
    void SetWheels(int wheels);
    int GetWheels();
    void WeStartTheEngine(Man& who);
    void NeedToFixUrgently();
    void FastenSeatBelts();
    void NeedToFix();
    void RideBack();
};

