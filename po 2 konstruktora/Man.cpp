#include "Man.h"
#include<iostream>
#include<locale>
#include<string>
#include<Windows.h>

string name;
Man::Man() {
    happy = 0;
    hungry = 0;
    anger = 0;
}
Man::Man(int happy, int hungry, int anger) {
    this->SetHappy(happy);
    this->SetHungry(hungry);
    this->SetAnger(anger);
}
void Man::SetHappy(int happy) {
    if (happy >= 0 && happy <= 100) {
        this->happy = happy;
    }
}
const int Man::GetHappy() {
    return happy;
}
void Man::SetHungry(int hungry) {
    if (hungry >= 0 && hungry <= 100) {
        this->hungry = hungry;
    }
}
const int Man::GetHungry() {
    return hungry;
}
const int Man::GetNumberOfEyes() {
    return number_of_eyes;
}
const int Man::GetNumberOfHands() {
    return number_of_hands;
}
void Man::SetAnger(int anger) {
    if (anger > 0 && anger < 100) {
        this->anger = anger;
    }
}
const int Man::GetAnger() {
    return anger;
}
void Man::PickUp(MobilePhone& what) {
    cout << "Телефон в руках)" << endl;
}

void Man::Dance() {
    if (hungry >= 70) {
        cout << "Я голодный!" << endl;
    }
    else {
        cout << name << " танцює" << endl;
    }
}

void Man::StopDance() {
    cout << "Микита припинив танцювати" << endl;
}

void Man::Music(string executor) {
    cout << "Микита почав слухати музику " << executor << endl;
}

void Man::Walk() {
    cout << "Микита поблукав" << endl;
}

void Man::DoHomework() {
    if (hungry >= 70) {
        cout << "Я голодный!" << endl;
    }
    else {
        cout << "Микита почав виконувати домашнє завдання" << endl;
    }
}