#ifndef BIGNUM_HPP
#define BIGNUM_HPP

#include <iostream>
#include <cstdint>
#include <string>
#include <list>

#include "../includes/number.hpp"

/*
This class handle bignum. Numbers are stored in base2 and operations are made with bitwise operators.

Numbers are stored in a list of 64 bits, they are unsigned and in base2 as well
*/

struct Number {
    int bit_size;
    std::list<uint64_t> table {};
};


class Bn {
    public:
        Bn();                               //constructor: set the value to 0
        Bn(std::list<uint64_t> table);      //give the number directly into 64 bits size block
        Bn(std::string &number);            //convert the number into 64 bits size block 
        
        void Bn_init();                     //set the value to zero
        void Bn_set(std::string &number);   //set the value to the given number
        void Bn_print(int base);            //print the number in the given base
        void Bn_free();                     //reset the number to 0
        void Bn_clear();                    //destroy definetely the number

    private:
        struct Number number_table;
};  


void Bn_add(Bn res, Bn a, Bn b);         // Bignum binary addition
void Bn_sub(Bn res, Bn a, Bn b);         // Bignum binary substraction
void Bn_mul(Bn res, Bn a, Bn b);         // Bignum binary multiplication
void Bn_div(Bn res, Bn q, Bn a, Bn b);   // Bignum binary division


#endif