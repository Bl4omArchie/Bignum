#include <bitset>

/*
void binary_division(std::bitset<64> res, std::bitset<64> dividend, std::bitset<64> divisor, std::bitset<64>& remainder) {
    std::bitset<64> quotient = 0;

    for (int i = 63; i >= 0; --i) {
        remainder <<= 1;            // Décalage à gauche de 1 pour ajouter le prochain bit du dividende
        remainder[i] = dividend[i]; // Ajouter le prochain bit du dividende à la partie droite du reste

        if (remainder >= divisor) {
            remainder ^= divisor;  // Soustraction du diviseur
            quotient[i] = 1;       // Mise à 1 du bit correspondant dans le quotient
        }
    }

    return quotient;
}


void binary_multiplication(std::bitset<128> res, std::bitset<64> multiplicand, std::bitset<64> multiplier) {
    std::bitset<128> product = 0;

    for (int i = 0; i < 64; ++i) {
        if (multiplier[i] == 1) {
            product ^= (multiplicand << i); // Ajouter le multiplicand décalé à gauche par i
        }
    }

    return product;
}


void binary_addition(std::bitset<64> res, std::bitset<64> a, std::bitset<64> b) {
    std::bitset<64> sum = 0;
    int carry = 0;

    for (int i = 0; i < 64; ++i) {
        int bit_sum = a[i] ^ b[i] ^ carry;
        carry = (a[i] & b[i]) | ((a[i] ^ b[i]) & carry);
        sum[i] = bit_sum;
    }

    overflow = carry;

    return sum;
}


void binary_subtraction(std::bitset<64> res, std::bitset<64> a, std::bitset<64> b) {
    std::bitset<64> difference = 0;
    int borrowBit = 0;

    for (int i = 0; i < 64; ++i) {
        int bit_difference = a[i] ^ b[i] ^ borrowBit;
        borrowBit = (~a[i] & (b[i] | borrowBit)) | (b[i] & borrowBit);
        difference[i] = bit_difference;
    }
    
    return difference;
}
*/