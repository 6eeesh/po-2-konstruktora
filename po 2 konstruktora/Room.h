#include<iostream>
#include<locale>
#include<string>
#include<Windows.h>
using namespace std;
class Room
{
    int temperature;
    int bed_condition;
    int computer = 1;
    int doors = 1;
    int windows = 3;
    int bed = 1;
    string wallpaper_color = "blue";
    int chairs = 4;
public:
    Room();
    Room(int temperature, int bed, int computer, int windows);
    void SetBed(int bed);
    int GetBed();
    void SetTemperature(int temperature);
    int GetTemperature();
    const int GetDoors();
    void SetComputer(int computer);
    const int GetComputer();
    void OpenTheDoor(Man& who);
    void TurnOnTheComputer();
    void LieOnTheBed();
    void OpenTheWindow();
    void SitOnChair();
};

