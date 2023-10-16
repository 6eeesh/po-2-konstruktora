#include<iostream>
#include<locale>
#include<string>
#include<Windows.h>
using namespace std;

class Monkey
{
    int eyes;
    int hands;
    int ears;
    double wool_length = 0.4;
    string nick = "Arnold";
public:
    Monkey();
    Monkey(int eyes, int hands, int ears);
    void SetEyes(int eyes);
    int GetEyes();
    void SetHands(int hands);
    int GetHands();
    void SetEars(int ears);
    const int GetEars();
    void Eat(string food);
    void Noise(Man& who);
    void Sleep();
    void Play();
    void Dance();
};

