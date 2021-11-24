#include<iostream>
#include<string>
using namespace std;

class Date
{
private:
    int day;
    string month;
    int year;
public:
    int getDay();
    string getMonth();
    int getYear();
};

class Pilot
{
private:
    string name;
    int flyingHours;
    int pilotID;
public:

};

class Seat
{
private:
    int seatNumber;
    bool isResearved;
public:

};

class Flight
{
private:
    string destination;
    Date dateOfFlight;
    Pilot* thePilot;
    Seat theSeat;
public:

};

int main()
{
    Flight toRome; //
}
