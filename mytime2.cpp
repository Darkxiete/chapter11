//
// Created by xk on 2019/8/19.
//

#include <iostream>
#include "Time2.h"

using std::cout;
using std::endl;

int main() {
    Time2 t1;
    t1.show();
    Time2 t2 = Time2(12, 30);
    t2.show();
    Time2 t3 = t2 - t1;
    t3.show();
    Time2 t4 = t3 * 2.0;
    t4.show();
}