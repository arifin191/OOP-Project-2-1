#include<bits/stdc++.h>
#include "staffs.h"
using namespace std;

void Staff::addStaff()
{
  cin.ignore();
  cout << "Enter name: "; getline(cin, Staff::name);
  cout << "Enter id: "; cin >> Staff::id;
  cout << "Enter salary: "; cin >> Staff::salary;
  cin.ignore();
  cout << "Enter address: "; getline(cin, Staff::address);
  cout << "Enter date of birth(dd/mm/yyyy): "; cin >> Staff::dob;
  cin.ignore();
  cout << "Enter contact(phone <space> email: "; getline(cin, Staff::contact);
}

void Staff::showStaff()
{
    cout << "Name: " << Staff::name << "\n";
    cout << "Id: " << Staff::id << "\n";
    cout << "Salary: " << Staff::salary << "\n";
    cout << "Address: " << Staff::address << "\n";
    cout << "Date of birth: " << Staff::dob << "\n";
    cout << "Contact(phone email): " << Staff::contact << "\n";
}

//set things

void Staff::setname(string s)
{
  Staff::name = s;
}

void Staff::setid(int n) 
{
  Staff::id = n;
}

void Staff::setsalary(int n) {
  Staff::salary = n;
}

void Staff::setaddress(string s) {
  Staff::address = s;
}

void Staff::setdob(string s) {
  Staff::dob = s;
}

void Staff::setcontact(string s)
{
  Staff::contact = s;
}

//get things

string Staff::getname()
{
  return Staff::name;
}

int Staff::getid()
{
  return Staff::id;
}

int Staff::getsalary()
{
  return Staff::salary;
}

string Staff::getaddress() {
  return Staff::address;
}

string Staff::getdob() {
  return Staff::dob;
}

string Staff::getcontact() {
  return Staff::contact;
}