#ifndef STUDENTS_H
#define STUDENTS_H

#include<bits/stdc++.h>
using namespace std;

class Student
{
protected:
    string name;
    int id;
    int year;
    bool scholarship;
    string address;
    string dob;
    string contact;
    string dept;

public:

    ///to add details
    void addstudent();
    void addname();
    void addid();
    void addyear();
    void addscholarship();
    void addaddress();
    void adddob();
    void addcontact();
    void adddept();

    ///to show details
    void showstudent();
    void showname();
    void showid();
    void showyear();
    void showscholarship();
    void showaddress();
    void showdob();
    void showcontact();
    void showdept();

    //to get things
    string getname();
    int getid();
    int getyear();
    bool getscholarship();
    string getaddress();
    string getdob();
    string getcontact();
    string getdept();

    //to set things
    void setid(int);
    void setname(string);
    void setyear(int);
    void setscholarship(bool);
    void setaddress(string);
    void setdob(string);
    void setcontact(string);
    void setdept(string);
    bool operator<(const Student&);
};

#endif