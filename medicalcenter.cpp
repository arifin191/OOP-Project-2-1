#include<bits/stdc++.h>
#include "medicalcenter.h"
using namespace std;

void MedicalCenter::adddoctor()
{
    cin.ignore();
  cout << "Enter name: "; getline(cin, MedicalCenter::Name);
  cout << "Enter contact(phone <space> email): "; getline(cin, MedicalCenter::Contact);
    //MedicalCenter::addname();
    //MedicalCenter::addcontact();
}

void MedicalCenter::addname()
{
    cout << "Enter name: "; cin >> MedicalCenter::Name;
}

void MedicalCenter::addcontact()
{
    cout << "Enter contact: "; cin >> MedicalCenter::Contact;
}


void MedicalCenter::showdoctor()
{
    MedicalCenter::showname();
    MedicalCenter::showcontact();
}

void MedicalCenter::showname()
{
    cout << "Name: " << MedicalCenter::Name << "\n";
}

void MedicalCenter::showcontact()
{
    cout << "Name: " << MedicalCenter::Contact<< "\n";
}

string MedicalCenter::getname()
{
    return MedicalCenter::Name;
}

string MedicalCenter::getcontact()
{
    return MedicalCenter::Contact;
}

void MedicalCenter::setname(string s) {
  MedicalCenter::Name = s;
}

void MedicalCenter::setcontact(string s) {
  MedicalCenter::Contact = s;
}
