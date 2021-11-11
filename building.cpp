#include<bits/stdc++.h>
using namespace std;

class building
{
protected:
	string name;
	int floor;
public:
	string getname()
	{
		return name;
	}
	int getfloor()
	{
		return floor;
	}

	void setname(string in_name)
	{
		name=in_name;
	}
	void setfloor(int flo)
	{
		floor= flo;
	}

	void showname()
	{
		cout<<"Name: "<<name<<endl;
	}

	void showfloor()
	{
		cout<<"Floors: "<<floor<<endl;
	}

	void showbuilding()
	{
		showname();
		showfloor();
	}

};

