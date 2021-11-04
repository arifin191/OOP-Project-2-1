#include<bits/stdc++.h>
#include "academicbuilding.h"
using namespace std;

void AB::addAB() {
  cin.ignore();
  cout << "Enter name : "; getline(cin, AB::name);
  cout << "Enter no. of floors: "; cin >> AB::floor;
  cout << "Enter no. of rooms: "; cin >> AB::room;
  //char ch; ch = getchar();
}

void AB::showAB() {
  cout << "Name: "; cout << AB::name << "\n";
  cout << "No. of floors: "; cout << AB::floor << "\n";
  cout << "No. of rooms: "; cout << AB::room << "\n";
}

void AB::updateAB() {
  cout << "Enter updated name : "; getline(cin, AB::name);
  cout << "Enter updated no. of floors: "; cin >> AB::floor;
  cout << "Enter updated no. of rooms: "; cin >> AB::room;
}

string AB::getname() {
  return AB::name;
}

int AB::getfloor() {
  return AB::floor;
}

int AB::getroom() {
  return AB::room;
}

void AB::setname(string s) {
  AB::name = s;
}

void AB::setfloor(int fl) {
  AB::floor = fl;
}

void AB::setroom(int rm) {
  AB::room = rm;
}
