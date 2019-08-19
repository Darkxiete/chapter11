//
// Created by xk on 2019/8/19.
//

#ifndef CHAPTER11_TIME3_H
#define CHAPTER11_TIME3_H

#include <iostream>

class Time3 {
private:
    int hours;
    int minutes;
public:
    Time3();
    Time3(int h, int m = 0);
    void AddMin(int m);
    void AddHr(int h);
    void Reset(int h = 0, int m = 0);
    Time3 operator+(const Time3 & t) const;
    Time3 operator-(const Time3 & t) const;
    Time3 operator*(double m) const;
    friend Time3 operator*(double m, const Time3 &t) { return t * m; };
    friend std::ostream &operator<<(std::ostream &os, const Time3 & t);
};


#endif //CHAPTER11_TIME3_H
