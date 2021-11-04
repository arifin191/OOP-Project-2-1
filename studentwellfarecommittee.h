#ifndef STUDENTWELLFARECOMMITTEE_H
#define STUDENTWELLFARECOMMITTEE_H

#include<bits/stdc++.h>
using namespace std;

class SWC ///SWC = Student Welfare Committee
{
protected:
    string president;
    string vice_president;
    string staff_member;
    string academic_advisor;
    string contact;

public:

    ///to add details
    void addMember();
    void addPresident();
    void addVice_President();
    void addStaff_Member();
    void addAcademic_Advisor();
    void addcontact();
    void writetofile();

    ///to show details
    void showMember();
    void showPresident();
    void showVice_President();
    void showStaff_Member();
    void showAcademic_Advisor();
    void showcontact();
    void readfromfile();

    ///to update details
    void updateMember();
    void updatePresident();
    void updateVice_President();
    void updateStaff_Member();
    void updateAcademic_Advisor();
    void updatecontact();

    ///Getter function
    string getPresident_name();
    string getVicePresident_name();
    string getStaffmember_name();
    string getAcademicadvisor_name();
    string get_contact();

    ///Setter function
    void setPresident_name(string p);
    void setVicePresident_name(string vp);
    void setStaffmember_name(string s);
    void setAcademicadvisor_name(string a);
    void set_contact(string c);

};


#endif