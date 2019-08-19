//
// Created by xk on 2019/8/19.
//

#ifndef CHAPTER11_TIME2_H
#define CHAPTER11_TIME2_H


class Time2 {
private:
    int hours;
    int minutes;
public:
    Time2();
    Time2(int h, int m = 0);
    void AddMin(int m);
    void AddHr(int h);
    void Reset(int h = 0, int m = 0);
    Time2 operator+(const Time2 & t) const;
    Time2 operator-(const Time2 & t) const;
    Time2 operator*(double n) const;
    void show() const;
};


#endif //CHAPTER11_TIME2_H
