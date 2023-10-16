#include<iostream>
#include<locale>
#include<string>
#include<Windows.h>
using namespace std;

class MobilePhone
{
private:
    int power;
    int brightness;
    const int front_camera = 1;
    const int back_camera = 3;
    string color = "Black";
    double diagonal = 6.06;
    const int side_button = 1;// ошибка какая-то
public:
    string model;
    MobilePhone();
    MobilePhone(int power, int diagonal, int brightness);
    void SetDiagonal(int diagonal);
    int GetDiagonal();
    void SetBackCamera(int back_camera);
    const int GetBackCamera();
    void SetSideButton(int side_button);
    const int GetSideButton();
    void SetBrightness(int brightness);
    int GetBrightness();
    void SetPower(int Power);
    const int GetPower();
    void Interaction(Man& who);
    void OnPhone(Man& who);
    void DoSelfie(Man& who);
    void MakeCall();
    void PlayTheGame();
    void PostPhoto(Man& who);
};

