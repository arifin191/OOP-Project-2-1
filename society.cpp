#include<bits/stdc++.h>
#include "society.h"
using namespace std;


///Function to add all details of a society
void Society:: addSociety()
{
  cin.ignore();
  cout << "Enter name: "; getline(cin, Society::name);
  cout << "Enter Room No. : "; cin >> Society::roomno;
  char ch; ch = getchar();
  cout << "Enter event: "; getline(cin, Society::event);
  cout << "Enter contact(phone <space> email): "; getline(cin, Society::contact);
    //Society::addname();
    //Society::addRoomNo();
    //Society::addcontact();
    //Society::addEvent();
}

///Function to show all details of a society
void Society:: showSociety()
{
    Society::showname();
    Society::showRoomNo();
    Society::showcontact();
    Society::showEvent();
}

///Function to update all details of a society
void Society:: updateSociety()
{
  cout << "Enter updated name: "; getline(cin, Society::name);
  cout << "Enter updated Room No. : "; cin >> Society::roomno;
  char ch; ch = getchar();
  cout << "Enter updated event: "; getline(cin, Society::event);
  cout << "Enter updated contact(phone <space> email): "; getline(cin, Society::contact);
    //Society::updatename();
    //Society::updateRoomNo();
    //Society::updatecontact();
    //Society::updateEvent();
}


///ADD Section
void Society::addname()
{
  cout << "Enter name: "; getline(cin, Society::name);
}
void Society::addRoomNo()
{
  cout << "Enter Room No. : "; cin >> Society::roomno;
}
void Society::addcontact()
{
    cout << "Enter contact: "; cin >> Society::contact;
}
void Society::addEvent()
{
    char ch; ch = getchar();
    cout << "Enter event: "; getline(cin, Society::event);
}

///SHOW Section
void Society::showname()
{
  cout << "Name: " << Society::name << "\n";
}
void Society::showRoomNo()
{
  cout << "RoomNo: " << Society::roomno << "\n";
}
void Society::showcontact()
{
    cout << "Contact: "; cout << Society::contact <<"\n";
}
void Society::showEvent()
{
    cout << "Event: "; cout << Society::event <<"\n";
}



///UPDATE Section
void Society::updatename()
{
  cout << "Enter updated name: "; cin >> Society::name;
}
void Society::updateRoomNo()
{
  cout << "Enter updated Room No. : "; cin >> Society::roomno;
}
void Society::updatecontact()
{
    cout << "Enter updated contact: "; cin >> Society::contact;
}
void Society::updateEvent()
{
    cout << "Enter updated event: "; cin >> Society::event;
}

///SET section
void Society::setname(string s) {
  Society::name = s;
}
void Society::setroomno(int rmn) {
  Society::roomno = rmn;
}
void Society::setevent(string s) {
  Society::event = s;
}
void Society::setcontact(string s) {
  Society::contact = s;
}

///GET section
string Society::getname() {
  return Society::name;
}
int Society::getroomno() {
  return Society::roomno;
}
string Society::getevent() {
  return Society::event;
}
string Society::getcontact() {
  return Society::contact;
}