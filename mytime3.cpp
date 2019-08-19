//
// Created by xk on 2019/8/19.
//

#include "Time3.h"
#include <iostream>

using std::cout;
using std::endl;

int main() {
    Time3 t1;
    cout << t1 << endl;
    Time3 t2 = Time3(12, 30);
    cout << t2 << endl;
    Time3 t3 = t2 - t1;
    cout << t3 << endl;
    Time3 t4 = t3 * 2.0;
    cout << t4 << endl;
}