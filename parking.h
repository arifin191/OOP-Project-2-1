#ifndef PARKING_H
#define PARKING_H

#include<bits/stdc++.h>
using namespace std;

class ParkingLot
{
protected:
    int cntCar;
    int Capacity;


public:
    ParkingLot() : cntCar(0) {}
    ///to add details
    void addgarage();
    void setcapacity(int);
    void setcar(int);
    void addcar();
    void removecar();
    void showparking();
    void writetofile();

    ///to show details
    void showcar();
    void showcapacity();
    void readfromfile();

    ///to get data
    int getcapacity();
    int getcount();
};


#endif