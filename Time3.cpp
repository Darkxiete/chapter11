//
// Created by xk on 2019/8/19.
//

#include "Time3.h"

Time3::Time3() {
    hours = minutes = 0;
}

Time3::Time3(int h, int m) {
    hours = h;
    minutes = m;
}

void Time3::AddMin(int m) {
    minutes += m;
}

void Time3::AddHr(int h) {
    hours += h;
}

void Time3::Reset(int h, int m) {
    hours = h;
    minutes = m;
}

Time3 Time3::operator+(const Time3 &t) const {
    Time3 sum;
    sum.hours = this->hours + t.hours + (this->minutes + t.minutes) / 60;
    sum.minutes = (this->minutes + t.minutes) % 60;
    return sum;
}

Time3 Time3::operator-(const Time3 &t) const {
    Time3 diff;
    diff.hours = this->hours - t.hours;
    diff.minutes = this->minutes - t.minutes;
    if (diff.minutes < 0) {
        diff.hours -= 1;
        diff.minutes += 60;
    }
    return diff;
}

Time3 Time3::operator*(double m) const {
    Time3 mult;
    mult.hours = this->hours * m;
    mult.minutes = this->minutes * m;
    if (mult.minutes >= 60) {
        mult.hours += mult.minutes / 60;
        mult.minutes = mult.minutes % 60;
    }
    return mult;
}

std::ostream& operator<<(std::ostream &os, const Time3 &t) {
    os << t.hours << " hours, " << t.minutes << " minutes";
    return os;
}

