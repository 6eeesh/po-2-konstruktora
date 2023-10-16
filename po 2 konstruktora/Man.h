#include<iostream>
#include<locale>
#include<string>
#include<Windows.h>
using namespace std;

class Man
{
    int happy;
    int anger;
    int hungry;
    const int number_of_hands = 2;
    const int number_of_eyes = 2;
    string eye_color = "green";
    string fur_color = "black";
public:
    string name;
    Man();
    Man(int happy, int hungry, int anger);
    void SetHappy(int happy);
    const int GetHappy();
    void SetHungry(int hungry);
    const int GetHungry();
    const int GetNumberOfEyes();
    const int GetNumberOfHands();
    void SetAnger(int anger);
    const int GetAnger();
    void PickUp(MobilePhone& what);
    void Dance();
    void StopDance();
    void Music(string executor);
    void Walk();
    void DoHomework();
};

