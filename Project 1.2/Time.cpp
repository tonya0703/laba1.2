#include "Time.h"
#include <iostream>
#include <string>

void Time::setHour(int h) {
    if (h >= 0 && h <= 23) {
        hour = h;
    }
    else {
        std::cerr << "Error: Incorrect hour value." << std::endl;
    }
}

void Time::setMinute(int m) {
    if (m >= 0 && m <= 59) {
        minute = m;
    }
    else {
        std::cerr << "Error: Incorrect minute value." << std::endl;
    }
}

void Time::setSecond(int s) {
    if (s >= 0 && s <= 59) {
        second = s;
    }
    else {
        std::cerr << "Error: Incorrect second value." << std::endl;
    }
}

void Time::Read() {
    int h, m, s;
    do {
        std::cout << "Enter hour: ";
        std::cin >> h;
        std::cout << "Enter minute: ";
        std::cin >> m;
        std::cout << "Enter second: ";
        std::cin >> s;
    } while (!Init(h, m, s));
}

bool Time::Init(int h, int m, int s) {
    if ((h >= 0 && h <= 23) && (m >= 0 && m <= 59) && (s >= 0 && s <= 59)) {
        setHour(h);
        setMinute(m);
        setSecond(s);
        return true;
    }
    else return false;
}

void Time::Display() const {
    std::cout << getHour() << " hours " << getMinute() << " minutes " << getSecond() << " seconds" << std::endl;
}

void Time::displayNormal() const {
    std::cout << getHour() << " hours " << getMinute() << " minutes " << getSecond() << " seconds" << std::endl;
}

void Time::displayPM() const {
    int h = getHour();
    std::string period = (h >= 12) ? "p.m." : "a.m.";
    int displayHour = (h > 12) ? h - 12 : h;
    std::cout << displayHour << " " << period << " " << getMinute() << " minutes " << getSecond() << " seconds" << std::endl;
}
