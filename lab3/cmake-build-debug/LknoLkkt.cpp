//
// Created by tonic on 2023. 03. 02..
//

#include "LknoLkkt.h"


int recGCD(int a, int b) {
    if (a == b) return a;
    else if (a > b) return recGCD(a - b, b);
    else return recGCD(a, b - a);
}

int recLCM2(int a, int b) {
    return a * b / recGCD(a, b);
}

int recLCM1(int a, int b, int a1, int b1) {
    if (a > b)
        if (a % b1 == 0)return a;
        else return recLCM1(a + a1, b, a1, b1);
    else if (b % a1 == 0)
        return b;
    else return recLCM1(a, b + b1, a1, b1);
}
