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
    //Getters
    int getDay();
    string getMonth();
    int getYear();

private:
    //setter
    void setDay(int dayP);
    void setMonth(string monthP);
    void setYear(int yearP);

public:
    Date(); //constructor por DEFAULT
    Date(int dayP, string monthP, int yearP); // yearP porque es un parámetro
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

int Date::getDay()
{
    return day;
}

void Date::setDay(int dayP)
{
    day = dayP;
}

class Pilot
{
    string name;
    int flyingHours;
    int pilotID;
};

class Seat
{
    int seatNumber;
    bool isResearved;
};

class Flight
{
    string destination;
    Date dateOfFlight;
    Pilot* thePilot;
    Seat theSeat;
};

int main()
{
    //INSTANCIA o OBJETO
    Date fechaDeHoy;
    cout << fechaDeHoy.getDay();
    Date miCumpleanios(14, "enero", 1980);
    cout << miCumpleanios.getDay();
}
