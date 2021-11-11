#ifndef HALL_H
#define HALL_H

#include<bits/stdc++.h>
//#include "building.cpp"
using namespace std;

//
//class building
//{
//protected:
//	string name;
//	int floor;
//public:
//	string getname()
//	{
//		return name;
//	}
//	int getfloor()
//	{
//		return floor;
//	}
//
//	void setname(string in_name)
//	{
//		name=in_name;
//	}
//	void setfloor(int flo)
//	{
//		floor= flo;
//	}
//
//	void showname()
//	{
//		cout<<"Name: "<<name<<endl;
//	}
//
//	void showfloor()
//	{
//		cout<<"Floors: "<<floor<<endl;
//	}
//
//	void showbuilding()
//	{
//		showname();
//		showfloor();
//	}
//
//};


class Hall : public building
{
protected:
  int id, maxcap, floor;
  string name, supervisor;
  string contact;
public:
  void addHall();
  void showHall();
  int getid();
  int getmaxcap();
  int getfloor();
  string getname();
  string getsupervisor();
  string getcontact();
  void setname(string);
  void setmaxcap(int);
  void setfloor(int);
  void setsupervisor(string);
  void setcontact(string);
};

#endif
