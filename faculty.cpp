#include<bits/stdc++.h>
#include "faculty.h"
using namespace std;

void Faculty::addfaculty() {
  char ch; ch = getchar();
  cout << "Enter name: "; getline(cin, Faculty::name);
  cout << "Enter id: "; cin >> Faculty::id;
  cout << "Enter salary: "; cin >> Faculty::salary;
  ch = getchar();
  cout << "Enter address: "; getline(cin, Faculty::address);
  cout << "Enter designation: "; getline(cin, Faculty::desig);
  cout << "Enter contact:(phone <space> email) "; getline(cin, Faculty::contact);
}

void Faculty::showfaculty() {
  cout << "Name: " << Faculty::name << "\n";
  cout << "Id: " << Faculty::id << "\n";
  cout << "Dept: " << Faculty::dept << "\n";
  cout << "Salary: " << Faculty::salary << "\n";
  cout << "Address: " << Faculty::address << "\n";
  cout << "Designation: " << Faculty::desig << "\n";
  cout << "Contact: " << Faculty::contact << "\n";
}

int Faculty::getid() {
  return Faculty::id;
}

int Faculty::getsalary() {
  return Faculty::salary;
}

string Faculty::getname() {
  return Faculty::name;
}

string Faculty::getaddress() {
  return Faculty::address;
}

string Faculty::getdept() {
  return Faculty::dept;
}

string Faculty::getdesig() {
  return Faculty::desig;
}

string Faculty::getcontact() {
  return Faculty::contact;
}

void Faculty::setname(string s) {
  Faculty::name = s;
}

void Faculty::setid(int id) {
  Faculty::id = id;
}

void Faculty::setaddress(string s) {
  Faculty::address = s;
}

void Faculty::setsalary(int sal) {
  Faculty::salary = sal;
}

void Faculty::setdept(string s) {
  Faculty::dept = s;
}

void Faculty::setdesig(string s) {
  Faculty::desig = s;
}

void Faculty::setcontact(string s) {
  Faculty::contact = s;
}

bool Faculty::operator<(const Faculty &f) {
  return (this->id < f.id);
}
