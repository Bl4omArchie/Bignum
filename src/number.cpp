#include <bitset>

/*
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
*/

std::bitset<64> binary_addition(std::bitset<64> a, std::bitset<64> b) {
    std::bitset<64> res, ret;

    res = a != b;
    ret = a & b;

    if (ret == 0)
        return binary_addition(res, ret);
    else
        return res;
}