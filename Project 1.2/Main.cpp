#include "Time.h"
#include <iostream>

Time makeTime(int h, int m, int s) {
    Time t;
    t.Init(h, m, s);
    return t;
}

int main() {
    Time t1 = makeTime(16, 18, 3);

    std::cout << "Time in normal format: ";
    t1.displayNormal();

    std::cout << "Time in p.m. format: ";
    t1.displayPM();

    t1.setHour(20);

    std::cout << "Updated hour: " << t1.getHour() << std::endl;

    t1.Read();

    t1.Display();

    t1.displayPM();
}