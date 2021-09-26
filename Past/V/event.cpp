#include"event.h"
#include<iostream>

#include<cstring>

using namespace std;

void Event::setEventDetails(int evID, const char evTyp[], const char evColor[], const char loc[]) {

    eventID = evID;
    strcpy_s(eventType, evTyp);
    strcpy_s(eventColor, evColor);
    strcpy_s(location, loc);

};

void Event::displayEventDetails() {

    cout << "EventType = " << eventType << endl;
    cout << "ThemeColor = " << eventColor << endl;
    cout << "Location = " << location << endl << endl;

};

void Event::setEventLocation(const char loca[]) {
    
    strcpy_s(location , loca);

};