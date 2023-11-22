#ifndef BIGNUM_HPP
#define BIGNUM_HPP

#include <iostream>
#include <cstdint>
#include <string>
#include <vector>

/*
This class handle bignum. Numbers are stored in base2 and operations are made with bitwise operators.

Numbers are stored in a list of 64 bits, they are unsigned and in base2 as well
*/


class Bn {
    public:
        Bn();
        Bn(std::string& number);   //constructor
        
        void Bn_init(std::string& number);             //init a number. Free the array and replace it with the new number
        void Bn_print(int base);    //print the number in the given base
        void Bn_free();             //reset the number to 0
        void Bn_clear();            //destroy definetely the number

    private:
        std::vector<uint64_t> table_numbers {};
};  


void Bn_add(Bn *res, Bn a, Bn b);         // binary addition
void Bn_sub(Bn *res, Bn a, Bn b);         // binary substraction
void Bn_mul(Bn *res, Bn a, Bn b);         // binary multiplication
void Bn_div(Bn *res, Bn q, Bn a, Bn b);   // binary division


#endif