#include<bits/stdc++.h>
#include "department.h"
using namespace std;


void seperator() {
    for (int i = 0; i < 50; ++i) {
        printf("_");
    }
    puts("");
}

///setter function
void Department::adddept()
{
  cout<<"Enter Dept id: ";
    cin>>Department::deptid;
      cout<<"Enter Dept Name: ";
      char ch = getchar();
    getline(cin, Department::name);
        cout<<"Enter Dept Location: ";
    getline(cin, Department::location);
}
void Department::adddeptid()
{
    cout<<"Enter Dept id: ";
    cin>>Department::deptid;
}

void Department::adddeptname()
{
    cout<<"Enter Dept Name: ";
    cin>>Department::name;
}
void Department::addlocation()
{
    cout<<"Enter Dept Location: ";
    cin>>Department::location;
}

///show functions
void Department::showdept()
{
    Department::showdeptid();
    Department::showdeptname();
    Department::showlocation();
}
void Department::showdeptid()
{
    cout<<"Dept id: ";
    cout<<Department::deptid<<endl;
}

void Department::showdeptname()
{
    cout<<"Dept Name: ";
    cout<<Department::name<<endl;
}
void Department::showlocation()
{
    cout<<"Dept Location: ";
    cout<<Department::location<<endl;
}

///getter function

int Department::getdeptid()
{
    return Department::deptid;
}

string Department::getdeptname()
{
    return Department::name;
}
string Department::getlocation()
{
    return Department::location;
}

void Department::addtostudent(string d) {
  Student s;
  s.addstudent();
  s.setdept(d);
  Department::stv.emplace_back(s);
}

void Department::addtofaculty(string d) {
  Faculty f;
  f.addfaculty();
  f.setdept(d);
  Department::ft.emplace_back(f);
}

void Department::showallstudents() {
  if (stv.empty()) {
    system("color 0C");
    puts("No students added so far!");
  }
  for (int i = 0; i < (int) stv.size(); ++i) {
    stv[i].showstudent();
    seperator();
  }
}

void Department::showallfaculties() {
  if (ft.empty()) {
    system("color 0C");
    puts("No faculties added so far!");
  }
  for (int i = 0; i < (int) ft.size(); ++i) {
    ft[i].showfaculty();
    seperator();
  }
}

void Department::delfaculty(int id) {
  for (int i = 0; i < (int) ft.size(); ++i) {
    if (ft[i].getid() == id) {
      ft.erase(ft.begin() + i);
      system("color 02");
      puts("Remove successful");
      return;
    }
  }
  system("color 0C");
  cout << "NO faculty present with the given id!\n";
}

void Department::delstudent(int id) {
  for (int i = 0; i < (int) stv.size(); ++i) {
    if (stv[i].getid() == id) {
      stv.erase(stv.begin() + i);
      system("color 02");
      puts("Remove successful");
      return;
    }
  }
  system("color 0C");
  cout << "NO student present with the given id!\n";
}
