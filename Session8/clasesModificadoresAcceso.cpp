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
    Date();
    Date(int dayP, string monthP, int yearP);
};

Date::Date(){}
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
    Pilot();
    Pilot(string nameP, int flyingHoursP, int pilotID);
};

Pilot::Pilot(){}
Pilot::Pilot(string nameP, int flyingHoursP, int pilotIDP)
{
    name=nameP;
    flyingHours = flyingHoursP;
    pilotID = pilotIDP;
}

class Seat
{
private:
    int seatNumber;
    bool isReserved;
public:
    Seat();
    Seat(int seatNumber, bool isReserved);
};

Seat::Seat(){}
Seat::Seat(int seatNumberP, bool isReservedP)
{
    seatNumber = seatNumberP;
    isReserved = isReservedP;
}

class Flight
{
private:
    string destination;
    Date dateOfFlight;
    int availableSeats;
    Seat** theSeats;
    Pilot* thePilot;
public:
    Flight();
    Flight(string destinationP, Date dateOfFlightP, int availableSeatsP, Pilot* thePilotP);
};

Flight::Flight(){}
Flight::Flight(string destinationP, Date dateOfFlightP, int availableSeatsP, Pilot* thePilotP)
{
    destination = destinationP;
    dateOfFlight = dateOfFlightP;
    availableSeats = availableSeatsP;
    thePilot = thePilotP;
    theSeats = new Seat*[availableSeats];
    for(int i=0; i<availableSeats; i++)
    {
        theSeats[i] = new Seat(i+1, false);
    }
}

int main()
{
    Pilot* pedroPiloto = new Pilot("Pedro", 8900, 123);
    Date treceDiciembre(13,"febrero",2021);
    Flight toRome("Rome", treceDiciembre, 10, pedroPiloto);
}
