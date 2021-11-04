#include<bits/stdc++.h>
#include "parking.h"
using namespace std;

void ParkingLot::addcar()
{
    if(ParkingLot::cntCar<ParkingLot::Capacity )ParkingLot::cntCar++;
    cout<<"A new car added to the lot\n";
}

void ParkingLot::showparking()
{
  cout << "Total capacity: " << ParkingLot::Capacity << "\n";
  cout << "Number of cars currently: " << ParkingLot::cntCar << "\n";
}

void ParkingLot::removecar() 
{
  if (ParkingLot::cntCar > 0) ParkingLot::cntCar--;
}

void ParkingLot::addgarage()
{
    cout<<"Enter Parking Lot Capacity: ";
    cin>>ParkingLot::Capacity;
    cout << "What are the total number of cars currently?: ";
    cin >> ParkingLot::cntCar;
}

void ParkingLot::setcapacity(int n) 
{
  ParkingLot::Capacity = n;
}

void ParkingLot::setcar(int n) 
{
  ParkingLot::cntCar = n;
}

void ParkingLot::showcapacity()
{
    cout<<"Parking Lot Capacity: " <<ParkingLot::Capacity<<endl;
}

void ParkingLot::showcar()
{
    cout<<"Current number of cars: " <<ParkingLot::cntCar<<endl;
}


int ParkingLot::getcapacity()
{
    return ParkingLot::Capacity;
}

int ParkingLot::getcount()
{
    return ParkingLot::cntCar;
}

void ParkingLot::writetofile()
{
    ofstream out;
    out.open("parking_lot.txt");
    out<<ParkingLot::Capacity<<" "<<ParkingLot::cntCar<<endl;
    out.close();
}


void ParkingLot::readfromfile()
{
    ifstream in;
    in.open("parking_lot.txt");
    in >> ParkingLot::Capacity ;
    in >> ParkingLot::cntCar;

    cout <<"Parking Lot Capacity: "<< ParkingLot::Capacity<<" \n";
    cout <<"Current Number of Cars: "<< ParkingLot::cntCar<<" \n";
    in.close();
}