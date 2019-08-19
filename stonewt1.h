//
// Created by summer on 2019-08-19.
//

#ifndef CHAPTER11_STONEWT1_H
#define CHAPTER11_STONEWT1_H


class Stonewt {
private:
    enum {Lbs_per_stn = 14};
    int stone;
    double pds_left;
    double pounds;
public:
    explicit Stonewt(double lbs);
    Stonewt(int stn, double lbs);
    Stonewt();
    ~Stonewt();
    void show_lbs() const;
    void show_stn() const;
    operator int() const;
    operator double() const;
};



#endif //CHAPTER11_STONEWT1_H
