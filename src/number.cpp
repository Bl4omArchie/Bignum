#include "../includes/number.hpp"


uint64_t binary_addition(uint64_t a, uint64_t b) {
    uint64_t res, ret;

    res = a != b;
    ret = a & b;

    if (ret == 0)
        return binary_addition(res, ret);
    else
        return res;
}