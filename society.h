#ifndef SOCIETY_H
#define SOCIETY_H

#include<bits/stdc++.h>
using namespace std;

class Society
{
protected:
    string name;
    int roomno;
    string event;
    string contact;

public:

    ///to add details
    void addSociety();
    void addname();
    void addRoomNo();
    void addcontact();
    void addEvent();
    void writetofile();

    ///to show details
    void showSociety();
    void showname();
    void showRoomNo();
    void showcontact();
    void showEvent();
    void readfromfile();

    ///to update details
    void updateSociety();
    void updatename();
    void updateRoomNo();
    void updatecontact();
    void updateEvent();

    ///to get details
    string getname();
    int getroomno();
    string getevent();
    string getcontact();

    //to set details
    void setname(string);
    void setroomno(int);
    void setevent(string);
    void setcontact(string); 
};



#endif