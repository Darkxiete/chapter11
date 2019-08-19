//
// Created by summer on 2019-08-19.
//

#include <iostream>
#include "stonewt1.h"


int main() {
    using std::cout;
    Stonewt poppins(9, 2.8);
    double p_wt = poppins;
    poppins.show_stn();
    cout << "Convert to double => ";
    cout << "Poppins: " << p_wt << " pounds.\n";
    cout << "Convert to int => ";
    cout << "Poppins: " << int(poppins) << " pounds.\n";
    return 0;
}
