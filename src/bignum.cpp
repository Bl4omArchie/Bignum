#include "../includes/bignum.hpp"


#include <list>

Bn::Bn() {
    Bn_init();
}

Bn::Bn(std::list<uint64_t> table) {
    Bn_init();

    number_table.bit_size = table.size();
}

Bn::Bn(std::string &number) {
    Bn_init();


}

void Bn::Bn_init() {
    number_table.table.clear();
}

void Bn::Bn_set(std::string &number) {
    
}

void Bn::Bn_print(int base) {

}

void Bn::Bn_free() {

}
void Bn::Bn_clear() {

}


void Bn_add(Bn res, Bn a, Bn b) {

}

void Bn_sub(Bn res, Bn a, Bn b) {

}

void Bn_mul(Bn res, Bn a, Bn b) {

}

void Bn_div(Bn res, Bn q, Bn a, Bn b) {

}