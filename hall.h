#ifndef HALL_H
#define HALL_H

#include<bits/stdc++.h>
using namespace std;

class Hall {
protected:
  int id, maxcap;
  string name, supervisor;
  string contact;
public:
  void addHall();
  void showHall();
  int getid();
  int getmaxcap();
  string getname();
  string getsupervisor();
  string getcontact();
  void setname(string);
  void setmaxcap(int);
  void setsupervisor(string);
  void setcontact(string);
};

#endif