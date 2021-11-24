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

    Date();                                     //Constructor Default
    Date(int dayP, string monthP, int yearP);   //Constructor con Parámetros
};

Date::Date()
{
    day = 1;
    month = "enero";
    year = 1980;
}

Date::Date(int dayP, string monthP, int yearP)
{
    day = dayP;
    month = monthP;
    year = yearP;
}

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
    string getDestination();
    Date getDate();
    Pilot* getPilot();
    Seat getSeat();

    Flight();
    Flight(string destinationP, Date dateOfFlightP, Pilot* thePilotP);
};

Flight::Flight(){}
Flight::Flight(string destinationP, Date dateOfFlightP, Pilot* thePilotP)
{
    destination = d
}

int main()
{
    Flight toRome
}
