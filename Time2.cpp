//
// Created by xk on 2019/8/19.
//

#include "Time2.h"
#include <iostream>

Time2::Time2() {
    hours = minutes = 0;
}

Time2::Time2(int h, int m) {
    hours = h;
    minutes = m;
}

void Time2::AddMin(int m) {
    minutes += m;
}

void Time2::AddHr(int h) {
    hours += h;
}

Time2 Time2::operator+(const Time2 &t) const {
    Time2 sum;
    sum.hours = this->hours + t.hours + (this->minutes + t.minutes) / 60;
    sum.minutes = (this->minutes + t.minutes) % 60;
    return sum;
}

Time2 Time2::operator-(const Time2 &t) const {
    Time2 diff;
    diff.hours = this->hours - t.hours;
    diff.minutes = this->minutes - t.minutes;
    if (diff.minutes < 0){
        diff.hours -= 1;
        diff.minutes += 60;
    }
    return diff;
}

Time2 Time2::operator*(double n) const {
    Time2 mult;
    mult.hours = this->hours * n;
    mult.minutes = this->minutes * n;
    if (mult.minutes >= 60){
        mult.hours += mult.minutes / 60;
        mult.minutes = mult.minutes % 60;
    }
    return mult;
}

void Time2::show() const {
    std::cout << "Hours = " << hours;
    std::cout << " Minutes = " << minutes << std::endl;
}