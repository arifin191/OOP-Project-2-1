#include<bits/stdc++.h>
#include "students.h"
using namespace std;


///Function to add all details of a student
void Student:: addstudent()
{
  cin.ignore();
  cout << "Enter name: "; getline(cin, Student::name);
  //cout << "Enter dept: "; getline(cin, Student::dept);
  cout << "Enter id: "; cin >> Student::id;
  cout << "Enter year: "; cin >> Student::year;
  //char ch; ch = getchar();
  cout << "Enter Scholarship status:(0/1) "; cin >> Student::scholarship;
  cin.ignore();
  cout << "Enter address: "; getline(cin, Student::address);
  //cin.ignore();
  cout << "Enter date of birth(dd/mm/yyyy): "; getline(cin, Student::dob);
  //cin.ignore();
  cout << "Enter contact(phone <space> email: "; getline(cin, Student::contact);
  //cin.ignore();
    /*Student::addname();
    Student::addid();
    Student::addyear();
    Student::addscholarship();
    Student::addaddress();
    Student::adddob();
    Student::addcontact();
    Student::adddept();
    */
}

///Function to show all details of a student
void Student:: showstudent()
{
    Student::showname();
    Student::showid();
    Student::showyear();
    Student::showdept();
    Student::showscholarship();
    Student::showaddress();
    Student::showdob();
    Student::showcontact();
}

///ADD Section
void Student::adddob()
{
    cout << "Enter date of birth:(dd mm yyyy) "; cin >> Student::dob;
}
void Student::adddept()
{
    cout << "Enter Dept.: "; cin >> Student::dept;
}
void Student::addcontact()
{
    cout << "Enter contact: "; cin >> Student::contact;
}
void Student::addaddress()
{
    cout << "Enter address: "; cin >> Student::address;
}
void Student::addscholarship()
{
    cout << "Enter Scholarship status:(0/1) "; cin >> Student::scholarship;
}
void Student::addyear()
{
    cout << "Enter year: "; cin >> Student::year;
}
void Student::addname() {
  cout << "Enter name: "; cin >> Student::name;
}

void Student::addid() {
  cout << "Enter id: "; cin >> Student::id;
}


///SHOW Section
void Student::showname() {
  cout << "Name: " << Student::name << "\n";
}

void Student::showid() {
  cout << "ID: " << Student::id << "\n";
}

void Student::showdob()
{
    cout << "Date of birth: "; cout << Student::dob << "\n" ;
}
void Student::showdept()
{
    cout << "Dept.: "; cout<< Student::dept<<endl;
}
void Student::showcontact()
{
    cout << "Contact: "; cout << Student::contact <<endl;
}
void Student::showaddress()
{
    cout << "Address: "; cout << Student::address<<endl;
}
void Student::showscholarship()
{
    cout << "Scholarship Status: "; Student::scholarship ? cout<<"Scholarship"<<endl : cout<<"Self"<<endl;
}
void Student::showyear()
{
    cout << "Year: "; cout << Student::year <<endl;
}

//get section
string Student::getname() {
  return Student::name;
}

int Student::getid() {
  return Student::id;
}

int Student::getyear() {
  return Student::year;
}

bool Student::getscholarship() {
  return Student::scholarship;
}

string Student::getaddress() {
  return Student::address;
}

string Student::getdob() {
  return Student::dob;
}

string Student::getcontact() {
  return Student::contact;
}

string Student::getdept() {
  return Student::dept;
}

//set section
void Student::setname(string s) {
  Student::name = s;
}

void Student::setid(int i) {
  Student::id = i;
}

void Student::setyear(int i) {
  Student::year = i;
}

void Student::setscholarship(bool b) {
  Student::scholarship = b;
}

void Student::setaddress(string s) {
  Student::address = s;
}

void Student::setdob(string s) {
  Student::dob = s;
}

void Student::setcontact(string s) {
  Student::contact = s;
}

void Student::setdept(string s) {
  Student::dept = s;
}
