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
    string tipoAsiento; // First class, Economy class, 
    Seat();
public:
    Seat(int seatNumberP, bool isReservedP, string tipoAsientoP);
    Seat(int seatNumberP, string tipoAsientoP);
};

Seat::Seat(){}
Seat::Seat(int seatNumberP, bool isReservedP, string tipoAsientoP)
{
    seatNumber = seatNumberP;
    isReserved = isReservedP;
}
Seat::Seat(int seatNumberP, string tipoAsientoP)
{
    seatNumber = seatNumberP;
    isReserved = false;
}

class Flight
{
private:
    int flyingHours;
    string destination;
    Date dateOfFlight;  //Composición
    int availableSeats;
    Seat** theSeats;    //Composición
    Pilot* thePilot;    //Composición
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
        theSeats[i] = new Seat(i+1, "economy class");
    }
}

int main()
{
    Pilot* pedroPiloto = new Pilot("Pedro", 8900, 123);
    Date treceDiciembre(13,"febrero",2021);
    Flight toRome("Rome", treceDiciembre, 10, pedroPiloto);
}
