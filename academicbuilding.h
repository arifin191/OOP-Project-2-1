#ifndef ACADEMICBUILDING_H
#define ACADEMICBUILDING_H

#include<bits/stdc++.h>
using namespace std;

class AB {
protected:
  string name;
  int floor, room;
public:
  void addAB();
  void showAB();
  void updateAB();
  string getname();
  int getfloor();
  int getroom();
  void setname(string);
  void setfloor(int);
  void setroom(int);
};

#endif