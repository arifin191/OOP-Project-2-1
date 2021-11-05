#ifndef FACULTY_H
#define FACULTY_H

#include<bits/stdc++.h>
using namespace std;

class Faculty {
protected:
  int id, salary;
  string name, address, dept;
  string contact, desig;
public:
  void addfaculty();
  void showfaculty();
  int getid();
  int getsalary();
  string getname();
  string getaddress();
  string getdept();
  string getcontact();
  string getdesig();
  void setname(string);
  void setid(int);
  void setsalary(int);
  void setaddress(string);
  void setdept(string);
  void setcontact(string);
  void setdesig(string);
  bool operator<(const Faculty&);
};

#endif
