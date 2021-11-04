#ifndef MEDICALCENTER_H
#define MEDICALCENTER_H

#include<bits/stdc++.h>
using namespace std;

class MedicalCenter 
{
protected:
    string Name;
    string Contact;

public:

    ///to add details
    void adddoctor();
    void addname();
    void addcontact();
    void writetofile();

    ///to show details
    void showdoctor();
    void showname();
    void showcontact();
    void readfromfile();

    ///to get data
    string getname();
    string getcontact();

    //to set data
    void setname(string);
    void setcontact(string);
};



#endif