#include "MobilePhone.h"
#include<iostream>
#include<locale>
#include<string>
#include<Windows.h>



string model;
MobilePhone::MobilePhone() {
    power = 0;
    diagonal = 0;
    brightness = 0;
}
MobilePhone::MobilePhone(int power, int diagonal, int brightness) {
    this->SetPower(power);
    this->SetDiagonal(diagonal);
    this->SetBrightness(brightness);
}
void MobilePhone::SetDiagonal(int diagonal) {
    if (diagonal == 6.06) {
        this->diagonal = diagonal;
    }
}
int MobilePhone::GetDiagonal() {
    return diagonal;
}
void MobilePhone::SetBackCamera(int back_camera) {
    if (back_camera == 1) {
        this->back_camera = back_camera;
    }
}
const int MobilePhone::GetBackCamera() {
    return back_camera;
}
void MobilePhone::SetSideButton(int side_button) {
    if (side_button == 1) {
        this->side_button = side_button;
    }
}
const int MobilePhone::GetSideButton() {
    return side_button;
}
void MobilePhone::SetBrightness(int brightness) {
    if (brightness >= 0 && brightness <= 100) {
        this->brightness = brightness;
    }
}
int MobilePhone::GetBrightness() {
    return brightness;
}
void MobilePhone::SetPower(int Power) {
    if (Power >= 0 && Power <= 100) {
        this->power = Power;
    }
}
const int MobilePhone::GetPower() {
    return power;
}
void MobilePhone::Interaction(Man& who) {
    cout << "Почалася взаємодія з кимось" << endl;
}

void MobilePhone::OnPhone(Man& who) {
    if (power >= 5) {
        cout << "Телефон почав вмикається" << endl;
    }
    else {
        cout << "Треба вмикнути зарядку!" << endl;
    }
}

void MobilePhone::DoSelfie(Man& who) {
    cout << "Вмикається фронтальна камера та вилетіла пташка" << endl;
}

void MobilePhone::MakeCall() {
    cout << "Чути гудки..." << endl;
}

void MobilePhone::PlayTheGame() {
    cout << "Вмикається гра" << endl;
}

void MobilePhone::PostPhoto(Man& who) {
    cout << "Спочатку потрібно завантажити Instagram!" << endl;
}