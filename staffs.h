#ifndef STAFFS_H
#define STAFFS_H

#include<bits/stdc++.h>
using namespace std;

class Staff
{
protected:
    string name;
    int id,salary;
    string address;
    string dob;
    string contact;

public:

    void addStaff();
    void showStaff();

    //set things
    void setname(string);
    void setid(int);
    void setsalary(int);
    void setaddress(string);
    void setdob(string);
    void setcontact(string);

    //get things
    string getname();
    int getid();
    int getsalary();
    string getaddress();
    string getdob();
    string getcontact();


};

#endif