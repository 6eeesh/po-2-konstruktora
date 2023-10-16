#include "Monkey.h"
#include<iostream>
#include<locale>
#include<string>
#include<Windows.h>


Monkey::Monkey() {
    eyes = 0;
    hands = 0;
    ears = 0;
}

Monkey::Monkey(int eyes, int hands, int ears) {
    this->SetEyes(eyes);
    this->SetHands(hands);
    this->SetEars(ears);
}
void Monkey::SetEyes(int eyes) {
    if (eyes >= 0) {
        this->eyes = eyes;
    }
}
int Monkey::GetEyes() {
    return eyes;
}
void Monkey::SetHands(int hands) {
    if (hands >= 0) {
        this->hands = hands;
    }
}
int Monkey::GetHands() {
    return hands;
}
void Monkey::SetEars(int ears) {
    if (ears >= 0) {
        this->ears = ears;
    }
}
const int Monkey::GetEars() {
    return ears;
}
void Monkey::Eat(string food) {
    cout << "������ ������ " << food << " �� �������� ����" << endl;
}
void Monkey::Noise(Man& who) {
    if (ears == 0) {
        cout << "������� �� ����� ���" << endl;
    }
    if (ears > 0) {
        cout << "����������" << endl;
    }
}
void Monkey::Sleep() {
    cout << "������� � ������� ���� ��� ������" << endl;
}
void Monkey::Play() {
    if (hands == 2) {
        cout << "������� ������ ������� � �������" << endl;
    }
    if (hands < 2) {
        cout << "������� �� � ������!" << endl;
    }
}
void Monkey::Dance() {
    cout << "������� ������ ���� ����� ����" << endl;
}