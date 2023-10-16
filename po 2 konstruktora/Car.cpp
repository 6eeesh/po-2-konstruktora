#include "Car.h"
#include<iostream>
#include<locale>
#include<string>
#include<Windows.h>

Car::Car() {
    number_of_seats = 0;
    steering_wheel = 0;
    doors = 0;
    fuel = 0;
    wheels = 0;
}
Car::Car(int seats, int wheel, int doors, int fuel, int wheels) {
    this->SetNumberOfSeats(seats);
    this->SetSteeringWheel(wheel);
    this->SetDoors(doors);
    this->SetFuel(fuel);
    this->SetWheels(wheels);
}
void Car::SetNumberOfSeats(int number_of_seats) {
    if (number_of_seats == 7) {
        this->number_of_seats = number_of_seats;
    }
}
const int Car::GetNumberOfSeats() {
    return number_of_seats;
}
void Car::SetSteeringWheel(int steering_wheel) {
    if (steering_wheel == 1) {
        this->steering_wheel = steering_wheel;
    }
}
const int Car::GetSteeringWheel() {
    return steering_wheel;
}
void Car::SetDoors(int doors) {
    if (doors == 4) {
        this->doors = doors;
    }
}
const int Car::GetDoors() {
    return doors;
}
void Car::SetFuel(int fuel) {
    if (fuel >= 0) {
        this->fuel = fuel;
    }
}
const int Car::GetFuel() {
    return fuel;
}
void Car::SetWheels(int wheels) {
    if (wheels >= 0) {
        this->wheels = wheels;
    }
}
int Car::GetWheels() {
    return wheels;
}
void Car::WeStartTheEngine(Man& who) {
    if (wheels == 6 && fuel > 0) {
        cout << "���� ��� ����� ����" << endl;
    }
    else {
        cout << "��� ������ �� ���!)" << endl;
    }
}
void Car::NeedToFixUrgently() {
    cout << "�� ����� �������� ������, ����� ���� ����" << endl;
}
void Car::FastenSeatBelts() {
    cout << "������ ������ ��� ��� ������� � ��� ��, �� ����� ����������� �����" << endl;
}
void Car::NeedToFix() {
    cout << "������ ������ ���� �� ����, ������� ������ �� ���" << endl;
}
void Car::RideBack() {
    if (wheels == 6 && fuel > 0) {
        cout << "������ ������ �������� �����" << endl;
    }
    else {
        cout << "��� ������ �� ���!)" << endl;
    }
}
