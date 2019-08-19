//
// Created by summer on 2019-08-19.
//

#include <iostream>
#include "stonewt.h"

using std::cout;

int main() {
    Stonewt incognito = 275;
    Stonewt wolfe(287.5);
    Stonewt taft(21, 8);

    cout << "The celebrity weighed ";
    incognito.show_stn();
    cout << "The detective weighed ";
    wolfe.show_stn();
    cout << "The President weighed ";
    taft.show_lbs();
    incognito = 276.8;
    taft = 325;
    cout << "After dinner, the celebrity weighed";
    incognito.show_lbs();
    taft.show_lbs();
    cout << "The wrestler weighed even more.\n";
    cout << "No stone left unearned\n";
    return 0;

}