#include <iostream>
#include <string>

#include "includes/bignum.hpp"


int main(int argc, char *argv[]) {
    std::string A = "5146841641356414654546841464146844684686481321546887487841534684564676846840484980848406104848748087400";
    std::string B = "6840484980816413564016888451440610846864864684464676846864146844646414684468468648400646768468146844906";

    Bn bn_A;
    Bn bn_B;
    Bn bn_RES;

    bn_A.Bn_init();
    bn_B.Bn_init();



    Bn_add(bn_RES, bn_A, bn_B);
}