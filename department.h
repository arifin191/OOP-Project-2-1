#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include<bits/stdc++.h>
#include "students.cpp"
#include "faculty.cpp"
using namespace std;

class Department
{


public:
    int deptid;
    string name;
    string location;
    vector<Student> stv;
    vector<Faculty> ft;

    ///
    //Department();
    ///to add details
    void adddeptid();
    void adddeptname();
    void addlocation();
    void adddept();
   // void addtovec();

    ///to show details
    void showdeptid();
    void showdeptname();
    void showlocation();
    void showdept();

    ///to get data
    int getdeptid();
    string getdeptname();
    string getlocation();
   // int getcount();

   void addtostudent(string);
   void addtofaculty(string);

   void showallstudents();
   void showallfaculties();

   void delfaculty(int);
   void delstudent(int);
};

#endif
