#pragma once

class Time
{
private:
    int hour;
    int minute;
    int second;

public:
    bool Init(int hour, int minute, int second);
    void Read();
    void Display() const;

    int getHour() const { return hour; };
    int getMinute() const { return minute; };
    int getSecond() const { return second; };

    void setHour(int);
    void setMinute(int);
    void setSecond(int);
    
    void displayNormal() const;
    void displayPM() const;

};

