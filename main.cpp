#include <iostream>
#include <string>

#include "includes/bignum.hpp"


int main(int argc, char *argv[]) {
    std::string A = "0101010100101010101010101001011110010010101010101010101010101011101010010001110001";
    std::string B = "0101010101010101010101101010101101010100101010101000011110101011000110101010101101";

    Bn bn_A = Bn(A);
    Bn bn_B;
    Bn bn_RES;

    bn_A.Bn_print(2);
}