//
// Created by kenny on 11/11/2021.
//

#ifndef GOLDRABBITS_BIGINT_H
#define GOLDRABBITS_BIGINT_H

#include <vector>
using namespace std;

class BigInt {
    private:
        vector<char> digits;
        int numDigits;
        bool isNegative;
    public:
        BigInt(int n);
        BigInt(const string& s);
        void print();
        friend ostream& operator<<(ostream& out, const BigInt& BigInt);
        BigInt operator-(BigInt other);
        BigInt operator+(BigInt other);
        int operator<(BigInt other);

        // need to overload
        //  operator<() - required by map
        //  operator++




};


#endif //GOLDRABBITS_BIGINT_H
