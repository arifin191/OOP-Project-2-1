#include<bits/stdc++.h>
#include "studentwellfarecommittee.h"
using namespace std;


///Function to add all details of a StudentWelfareCommittee
void SWC:: addMember()
{
  cin.ignore();
  cout << "Enter president's name: "; getline(cin, SWC::president);
  //char ch; ch = getchar();
  cout << "Enter vice president's name: "; getline(cin,  SWC::vice_president);
  cout << "Enter staff member's name: "; getline(cin, SWC::staff_member);
  cout << "Enter academic advisor's name: "; getline(cin, SWC::academic_advisor);
    /*SWC::addPresident();
    SWC::addVice_President();
    SWC::addStaff_Member();
    SWC::addAcademic_Advisor();
    SWC::addcontact();
    */
}

///Function to show all details of a StudentWelfareCommittee
void SWC:: showMember()
{
    SWC::showPresident();
    SWC::showVice_President();
    SWC::showStaff_Member();
    SWC::showAcademic_Advisor();
    //SWC::showcontact();
}

///Function to update all details of a StudentWelfareCommittee
void SWC:: updateMember()
{
    SWC::updatePresident();
    SWC::updateVice_President();
    SWC::updateStaff_Member();
    SWC::updateAcademic_Advisor();
    SWC::updatecontact();
}



///ADD Section
void SWC::addPresident()
{
  cout << "Enter president's name: "; cin >> SWC::president;
}
void SWC::addVice_President()
{
  cout << "Enter vice president's name: "; cin >> SWC::vice_president;
}
void SWC::addStaff_Member()
{
    cout << "Enter staff member's name: "; cin >> SWC::staff_member;
}
void SWC::addAcademic_Advisor()
{
    cout << "Enter academic advisor's name: "; cin >> SWC::academic_advisor;
}
void SWC::addcontact()
{
    cout << "Enter contact: "; cin >> SWC::contact;
}


///File input
void SWC::writetofile()
{
    ofstream out;
    out.open("swc.txt");
    out<<SWC::president<<" "<<SWC::vice_president<<" "<<SWC::staff_member<<" "<<SWC::academic_advisor<<" "<<SWC::contact<<endl;
    out.close();
}



///SHOW Section
void SWC::showPresident()
{
  cout << "President's name: " << SWC::president << "\n";
}
void SWC::showVice_President()
{
  cout << "Vice president's name: " << SWC::vice_president << "\n";
}
void SWC::showStaff_Member()
{
    cout << "Staff member's name: "; cout << SWC::staff_member <<endl;
}
void SWC::showAcademic_Advisor()
{
    cout << "Academic advisor's name: "; cout << SWC::academic_advisor <<endl;
}
void SWC::showcontact()
{
    cout << "Contact: "; cout << SWC::contact <<endl;
}



///UPDATE Section
void SWC::updatePresident()
{
  cout << "Enter updated president's name: "; cin >> SWC::president;
}
void SWC::updateVice_President()
{
  cout << "Enter updated vice president's name: "; cin >> SWC::vice_president;
}
void SWC::updateStaff_Member()
{
    cout << "Enter updated staff member's name: "; cin >> SWC::staff_member;
}
void SWC::updateAcademic_Advisor()
{
    cout << "Enter updated academic advisor's name: "; cin >> SWC::academic_advisor;
}
void SWC::updatecontact()
{
    cout << "Enter updated contact: "; cin >> SWC::contact;
}



///File Output
void SWC::readfromfile()
{
    ifstream in;
    in.open("swc.txt");

    in >> SWC::president ;
    in >> SWC::vice_president ;
    in >> SWC::staff_member;
    in >> SWC::academic_advisor;
    in >> SWC::contact;

    cout << SWC::president <<" ";
    cout << SWC::vice_president <<" ";
    cout << SWC::staff_member <<" ";
    cout << SWC::academic_advisor <<" ";
    cout << SWC::contact <<endl;
    in.close();
}



///Getter function
string SWC::getPresident_name()
{
  return SWC::president;
}

string SWC::getVicePresident_name()
{
  return SWC::vice_president;
}

string SWC::getStaffmember_name()
{
  return SWC::staff_member;
}

string SWC::getAcademicadvisor_name()
{
  return SWC::academic_advisor;
}

string SWC::get_contact()
{
  return SWC::contact;
}




///Setter function
void SWC::setPresident_name(string p)
{
  SWC::president = p;
}

void SWC::setVicePresident_name(string vp)
{
  SWC::vice_president = vp;
}

void SWC::setStaffmember_name(string s)
{
  SWC::staff_member = s;
}

void SWC::setAcademicadvisor_name(string a)
{
  SWC::academic_advisor = a;
}

void SWC::set_contact(string c)
{
  SWC::contact = c;
}