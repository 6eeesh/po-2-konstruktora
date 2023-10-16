#include<iostream>
#include<locale>
#include<string>
#include<Windows.h>
using namespace std;

#include"Man.h"
#include"Room.h"
#include"MobilePhone.h"
#include"Monkey.h"
#include"Car.h"




int main() {
    setlocale(LC_ALL, "");
    Man m;
    MobilePhone p;
    Room r;

    m.name = "Nikita";
    p.model = "Iphone";

    r.OpenTheDoor(m);
    m.PickUp(p);
    p.Interaction(m);

    return 0;
}