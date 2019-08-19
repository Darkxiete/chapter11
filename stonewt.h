//
// Created by summer on 2019-08-19.
//

#ifndef CHAPTER11_STONEWT_H
#define CHAPTER11_STONEWT_H


class Stonewt {
private:
    enum {Lbs_per_stn = 14};
    int stone;
    double pds_left;
    double pounds;
public:
    Stonewt(double lbs);
    Stonewt(int stn, double lbs);
    Stonewt();
    ~Stonewt();
    void show_lbs() const;
    void show_stn() const;
};


#endif //CHAPTER11_STONEWT_H
