#include<bits/stdc++.h>
#include "hall.h"
using namespace std;

void Hall::addHall() {
  cin.ignore();
  cout << "Enter name: "; getline(cin, Hall::name);
  cout << "Enter max capacity: "; cin >> Hall::maxcap;
  char ch = getchar();
  cout << "Enter supervisor name: "; getline(cin, Hall::supervisor);
  cout << "Enter contact(phone <space> email: "; getline(cin, Hall::contact);
}

void Hall::showHall() {
  cout << "Name: " << Hall::name << "\n";
  cout << "Max capacity: " << Hall::maxcap << "\n";
  cout << "Name of supervisor: " << Hall::supervisor << "\n";
  cout << "Contact: " << Hall::contact << "\n";
}

string Hall::getname() {
  return Hall::name;
}

int Hall::getmaxcap() {
  return Hall::maxcap;
}

string Hall::getsupervisor() {
  return Hall::supervisor;
}

string Hall::getcontact() {
  return Hall::contact;
}

void Hall::setname(string s) {
  Hall::name = s;
}

void Hall::setmaxcap(int cap) {
  Hall::maxcap = cap;
}

void Hall::setsupervisor(string s) {
  Hall::supervisor = s;
}

void Hall::setcontact(string s) {
  Hall::contact = s;
}