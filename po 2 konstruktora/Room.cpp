#include "Room.h"
#include<iostream>
#include<locale>
#include<string>
#include<Windows.h>

Room::Room() {
    temperature = 0;
    bed = 0;
    computer = 0;
    windows = 0;
}
Room::Room(int temperature, int bed, int computer, int windows) {
    this->SetTemperature(temperature);
    this->SetBed(bed);
    this->SetComputer(computer);
    this->OpenTheWindow(windows);
}
void Room::SetBed(int bed) {
    if (bed == 1) {
        this->bed = bed;
    }
}
int Room::GetBed() {
    return bed;
}
void Room::SetTemperature(int temperature) {
    if (temperature >= 0 && temperature <= 50) {
        this->temperature = temperature;
    }
}
int Room::GetTemperature() {
    return temperature;
}
const int Room::GetDoors() {
    return doors;
}
void Room::SetComputer(int computer) {
    if (computer == 1) {
        this->computer = computer;
    }
}
const int Room::GetComputer() {
    return computer;
}
void Room::OpenTheDoor(Man& who) {
    cout << "���� �����������" << endl;
}

void Room::TurnOnTheComputer() {
    cout << "����, �� ��������� ����'����" << endl;
}

void Room::LieOnTheBed() {
    if (bed_condition < 30) {
        cout << "������� ���������!!!" << endl;
    }
    if (bed_condition >= 30) {
        cout << "����������, �� ����� �� �������!!!" << endl;
    }
}

void Room::OpenTheWindow() {
    cout << "³��� ��������" << endl;
}

void Room::SitOnChair() {
    cout << "���� ��� � ������� � �� �����" << endl;
}